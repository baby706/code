#include <stdio.h>
#include <time.h>
#include <math.h>
#include <malloc.h>

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
            printf("%d ",i);
        }
        
    }
    free(num);
    printf("\n");
    return count;
}
int main()
{
    int count,n;
    clock_t start,end;
    printf("please input a number:");
    scanf("%d",&n);
    start = clock();
    count = Test_prime(n);
    end = clock();
    printf("%d 内的素数个数为：%d, 总共耗时为：%u 微秒\n", n, (unsigned int)count, (unsigned int)(end - start));

    return 0;
}
