#include <stdio.h>

void main(void)
{
  int color;
  for (color = 1; color < 16; color++)
  {
    textcolor(color);/*设置文本颜色*/
    printf("This is color %d\r\n", color);
  }
  textcolor(128 + 15);
  printf("This is blinking\r\n");
 
}