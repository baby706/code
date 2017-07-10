#include "apue.h"
#include <dirent.h>
#include <limits.h>
#include <errno.h>

typedef int Myfunc(const char *, const struct stat *, int);

static Myfunc myfunc;
static int myftw(const char *, Myfunc *);
static int dopath(Myfunc *);
static long nreg, ndir, nblk, nchr, nfifo, nslink, nsock, ntot;

int main(int argc, char const *argv[])
{
	int ret;
	if(argc != 2)
		err_sys("usage: ftw argument error");
	ret = myftw(argv[1], myfunc);
	ntot = nreg + ndir +nchr + nfifo + nslink + nsock;
	if(ntot == 0)
		ntot = 1;
	printf("regular files = %7ld, %5.2f, %%\n", nreg, nreg*100.0/ntot );
	printf("directories = %7ld, %5.2f, %%\n", ndir, ndir*100.0/ntot );
	printf("block special = %7ld, %5.2f, %%\n", nblk, nblk*100.0/ntot );
	printf("char special = %7ld, %5.2f, %%\n", nchr, nchr*100.0/ntot );
	printf("Fifos = %7ld, %5.2f, %%\n", nfifo, nfifo*100.0/ntot );
	printf("symbolic links = %7ld, %5.2f, %%\n", nslink, nslink*100.0/ntot );
	printf("sockets = %7ld, %5.2f, %%\n", nsock, nsock*100.0/ntot );

	exit(ret);

}

#define FTW_F 1
#define FTW_D 2
#define FTW_DNR 3
#define FTW_NS 4

static char *fullpath;
static size_t pathlen;

static int myftw(const char *pathname, Myfunc *func)
{
	fullpath = path_alloc(&pathlen);
	if(pathlen <= strlen(pathname))
	{
		pathlen = strlen(pathname) * 2;
		if((fullpath = realloc(fullpath, pathlen)) == NULL)
			err_sys("realloc failed");
	}

	strcpy(fullpath, pathname);
	return (dopath(func));


}


static int dopath(Myfunc *func)
{
	struct stat statbuf;
	struct dirent *dirp;
	DIR *dp;
	int ret, n;

	if(lstat(fullpath, &statbuf) < 0)
		return(func(fullpath, &statbuf, FTW_NS));

	if(S_ISDIR(statbuf.st_mode) == 0)
		return(func(fullpath, &statbuf, FTW_F));

	if((ret = func(fullpath, &statbuf, FTW_D)) != 0)
		return(ret);

	n = strlen(fullpath);
	if(n + NAME_MAX + 2 > pathlen)
	{
		pathlen *= 2;
		if((fullpath = realloc(fullpath, pathlen)) == NULL)
			err_sys("realloc failed");
	}
	fullpath[n++] = '/';
	fullpath[n] = 0;
	if((dp = opendir(fullpath)) == NULL)
		return(func(fullpath, &statbuf, FTW_DNR));
	while((dirp = readdir(dp)) != NULL)
	{
		if(strcmp(dirp->d_name, ".") == 0 || 
			strcmp(dirp->d_name, "..") == 0)
		strcpy(&fullpath[n], dirp->d_name);
		if((ret = dopath(func)) != 0)
			break;


	}

	fullpath[n-1] = 0;
	if(closedir(dp) < 0)
		printf("catn close directory %s\n", fullpath );
	return(ret);

}

static int myfunc(const char *pathname, const struct stat *statptr, int type)
{
	switch(type)
	{
		case FTW_F:
			switch (statptr->st_mode & S_IFMT)
			{
				case S_IFREG:	nreg++;	break;
				case S_IFBLK:	nblk++; break;
				case S_IFCHR:	nchr++; break;
				case S_IFIFO:	nfifo++; break;
				case S_IFLNK:	nslink++; break;
				case S_IFSOCK:	nsock++; break;
				case S_IFDIR:	printf("for S_IFDIR for %s\n",pathname );

			}
			break;
		case FTW_D:
			ndir ++;
			break;
		case FTW_DNR:
			printf("can't read directory %s", pathname);
			break;
		case FTW_NS:
			printf("stat error for %s", pathname);
			break;
		default:
			printf("unknown type %d for pathname %s\n", type, pathname );

	}

	return(0);
}



#ifdef PATH_MAX 
static int pathmax = PATH_MAX;
#else
static int pathmax = 0;
#endif


#define SUSV3 200112L


static long posix_version = 0;
#define PATH_MAX_GUESS 1024


char    *path_alloc(size_t *sizep)
{
	char    *ptr;
	int size;


	if(posix_version == 0)
	posix_version = sysconf(_SC_VERSION);


	if(pathmax == 0)
	{
		errno = 0;
		if((pathmax = pathconf("/", _PC_PATH_MAX)) < 0)
		{
			if(errno == 0)
			pathmax = PATH_MAX_GUESS;
			else err_sys("pathconf error for _PC_PATH_MAX");
		} 
		else 
		{
			pathmax++;
		}
	}
	if(posix_version < SUSV3)
	size = pathmax + 1;
	else size = pathmax;
	if((ptr = malloc(size)) == NULL)
	err_sys("malloc error for pathname");
	if(sizep != NULL)
	*sizep = size;
	return(ptr);
}



	













