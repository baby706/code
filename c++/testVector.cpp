/*************************************************************************
    > File Name:  testVector.cpp
    > File Path:  /Users/liangbo/Code/testVector.cpp
    > Author:     Liang Bo
    > Mail:       cs-b@163.com 
    > Funtion:
    > Build Time: 
 ************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

void print(vector<int>);
int main(int argc, char const *argv[])
{
	vector<int> vec;
	vec.push_back(34);
	vec.push_back(23);
	print(vec);
	vector<int>::iterator p;
	p = vec.begin();
	*p = 68;
	*(p+1) = 69;
	vec.pop_back();
	print(vec);
	vec.push_back(101);
	vec.push_back(102);
	int i = 0;
	while(i<vec.size())
		cout<<vec[i++]<<" ";
	cout<<endl;
	vec[0] = 1000;
	vec[1] = 1001;
	vec[2] = 1002;
	i = 0;
	while(i<vec.size())
		cout<<vec[i++]<<" ";
	print(vec);

	return 0;
}

void print(vector<int> v)
{
	cout<<"\nvector size is:"<<v.size()<<endl;
	vector<int>::iterator p = v.begin();
}





