#include <stdio.h>
#include <time.h>
#include <math.h>
#include <malloc.h>
//试除法
#define NUM 10000

int Test_prime(int n)
{
    int count = 0;
    int i, j;
    int *num = (int *)malloc(sizeof(int) * n);
    num[count++] = 2;
     
    for(i = 3; i <= n; i++)
    {
        for(j = 2; j <= sqrt(i); j++)
        {
            if(i % j == 0)
            {
                break;
            }
        }
        if(j > sqrt(i))
        {
            num[count++] = i;
        }
    }
    free(num);
    return count;
}
int main()
{
    int count;
    clock_t start,end;
    start = clock();
    count = Test_prime(NUM);
    end = clock();
    printf("%d 内的素数个数为：%d, 总共耗时为：%d 毫秒\n", NUM, count, end - start);

    return 0;
}