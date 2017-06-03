#include <iostream>
using namespace std;

void sort(int a[],int len)
{
	int i,j,temp;
	for(i = 0;i<len-1;i++)
	{
		for(j = 0;j<len-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
}

int main(int argc, char const *argv[])
{
	int a[5] = {2,3,1,5,4};
	int i;
	sort(a,5);
	for(i = 0;i<5;i++)
	{
		cout<<a[i]<<endl;
	}
	
	return 0;
}









