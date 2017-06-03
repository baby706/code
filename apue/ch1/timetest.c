#include <stdio.h>
#include <time.h>
#include <sys/time.h>


int main(int argc,char **argv)
{
    time_t now = 0x0fffffff;
    
    //now = now - 1;
    struct timeval now_val;
    //time(&now);
    struct tm gtime;
    gtime=(*localtime(&now));
    gettimeofday(&now_val,NULL);
    printf("%4d-%02d-%02d %02d:%02d:%02d now is %d\n",1900+gtime.tm_year,1+gtime.tm_mon,gtime.tm_mday,gtime.tm_hour,gtime.tm_min,gtime.tm_sec,now);
}