#include "../apue.h"
#include <sys/wait.h>

static void sig_int(int);

int main(int argc, char const *argv[])
{
	char buf[MAXLINE];
	pid_t pid;
	int status;

	if(signal(SIGINT, sig_int) == SIG_ERR)
	{
		printf("signal error\n");
	}

	printf("%% ");
	while(fgets(buf, MAXLINE, stdin) != NULL)
	{
		if(buf[strlen(buf) - 1] == '\n')
			buf[strlen(buf) - 1] = 0;

		if((pid = fork()) < 0)
		{
			printf("fork error\n");
			exit(0);
		}
		else
			if(pid == 0)
			{
				printf("This is  child process,the PID is %d.\n",getpid());
				execlp(buf, buf, (char *)0);
				printf("couldn't execcute: %s\n",buf);
				exit(127);
			}
			else
				printf("This is parent process,the PID is %d.\n",getpid() );
	

	if((pid = waitpid(pid, &status, 0)) < 0)
		printf("waitpid error\n");
	printf("status is %d\n\n\n",status  );
	printf("%% ");
    }
	return 0;
}

void sig_int(int signo)
{
	system("clear");
	printf("interrupt\n%%");
}