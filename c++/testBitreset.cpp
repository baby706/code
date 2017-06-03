/*************************************************************************
    > File Name:  
    > File Path:  
    > Author:     Liang Bo
    > Mail:       cs-b@163.com 
    > Funtion:
    > Build Time: 
 ************************************************************************/

#include <iostream>
#define BIT_MASK(bit_pos) (0x01<<bit_pos)
using namespace std;

int Bit_Reset(unsigned int* val,unsigned char pos)
{
	if(pos >= sizeof(int)*8)
		return 0;
	*val = (*val &~BIT_MASK(pos));
	return 1;
}
int main(int argc, char const *argv[])
{
	unsigned int x = 0xffffffff;
	unsigned char y = 1;
	Bit_Reset(&x,y);
	cout<<hex<<x<<endl;

	return 0;
}







