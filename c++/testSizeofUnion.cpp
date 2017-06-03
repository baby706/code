#include <iostream>
using namespace std;

typedef union
{
	char a;
	int b;
	short c;
	long i;
	int d[5];

}data;

typedef struct 
{
	int j;
	double k;
	data m;

}Data;

int main(int argc, char const *argv[])
{
	cout<<sizeof(Data)<<"  "<<sizeof(data)<<endl;
	cout<<sizeof(int)<<sizeof(long)<<sizeof(double);
	return 0;
}