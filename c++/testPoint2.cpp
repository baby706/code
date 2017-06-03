#include <stdio.h>

int main()  
{  
    const int con_var1 = 3;  
    int * b = (int *)&con_var1;  
    *b = 5;  
  
    printf("%d",con_var1);

    return 0;  
}  