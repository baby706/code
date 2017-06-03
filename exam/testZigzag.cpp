/*************************************************************************
    > File Name:  testZigzag.cpp
    > File Path:  /Users/liangbo/exam/testZigzag.cpp
    > Author:     Liang Bo
    > Mail:       cs-b@163.com
    > Funtion:
    > Build Time:
 ************************************************************************/

#include <iostream>
#include <stdio.h>
#include <sys/malloc.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int N;
    int i,j,s;
    int squa;
    printf("please input a number:");
    scanf("%d",&N);
    int** a = (int**)malloc(N * sizeof(int));
    if(a == NULL)
    {
        return 0;
    }
    for(i = 0;i < N;i++)
    {
        if((a[i] = (int*)malloc(N * sizeof(int))) == NULL)
        {
            while(--i>=0)
            {
                free(a[i]);
            }
            free(a);
            return 0;
        }
    }
    squa = N*N;
    for(i = 0;i < N;i++)
    {
        for(j = 0;j < N;j++)
        {
            s = i + j;
            if(s < N)
                a[i][j] = s*(s+1)/2+(((i+j)%2 == 0)?i : j);
            else
            {
                s = (N-1-i) + (N-1-j);
                a[i][j] = squa - s*(s+1)/2 - (N-(((i+j)%2 == 0)?i : j));
            }

        }
    }
    for(i = 0;i < N;i++)
    {
        for(j = 0;j < N;j++)
        {
            printf("%6d",a[i][j] );
        }
        printf("\n");
    }

    return 0;
}







