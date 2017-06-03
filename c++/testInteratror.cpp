/*************************************************************************
    > File Name:  testInteratror.cpp
    > File Path:  /Users/liangbo/Code/testInteratror.cpp
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
	vector<int> array;
	array.push_back(1);
	array.push_back(6);
	array.push_back(6);
	array.push_back(3);
	array.push_back(1);
	array.push_back(6);
	array.push_back(6);
	array.push_back(3);
	array.push_back(1);
	array.push_back(6);
	array.push_back(6);
	array.push_back(3);

	vector<int>::iterator itor;
	vector<int>::iterator itor2;
	itor = array.begin();

	for(itor=array.begin();itor!=array.end();)
	{
		if(6 == *itor)
		{
			//itor2 = itor;
			//itor = array.erase(itor2);   //此时，itor已指向了下一个元素
			itor = array.erase(itor);
			itor--;
		}
		itor++;
	}
	print(array);
	return 0;
}

void print(vector<int> v)
{
	cout<<"\nvector size is:"<<v.size()<<endl;
	vector<int>::iterator p = v.begin();
	for(;p!=v.end();p++)
		cout<<*p<<" ";
	cout<<endl;
}







