#include <stdio.h>
#include <stdlib.h>
 
void sort(int *a,int len)
{
    int i,j,temp,min;
    for(i = 0;i<len-1;i++)     //i需要到达倒数第二个，j就可以到达最后一个
    {
        min = i;
        for(j = i+1;j<len;j++)    //j从i+1开始，讲最小的数的下标给min
        {
            if(a[min] > a[j])
            {
                min = j;
            }
        }
        if(min != i)        //当前的i变成了最小的值
        {
            temp = a[min];
            a[i] = temp;
            a[min] = temp;
        }
    }
}

int main(int argc, char const *argv[])
{
    int i;
    int a[5] = {2,3,4,6,7};
    sort(a,5);
    for(i = 0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}