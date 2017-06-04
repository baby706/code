#include <stdio.h>

int main()  
{  
    const int var1 = 3;  
    int * b = (int *)&var1;  
    *b = 5;  
  
    printf("%d\n",Gvar1);

    return 0;  
}  