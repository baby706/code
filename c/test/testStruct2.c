/*************************************************************************
    > File Name:  testStruct2.c
    > File Path:  /Users/liangbo/Code/testStruct2.c
    > Author:     Liang Bo
    > Mail:       cs-b@163.com 
    > Funtion:
    > Build Time: 
 ************************************************************************/

#include<iostream>
#include <bitset>
using namespace std;
struct a{
    int x:1;
    int y:2;
    int z:32;
};
int main()
{
    a d;
    d.x=1;
    d.y=4;
    d.z=6;
    cout<<bitset<sizeof(int)*8>(d.x)<<endl;
    cout<<bitset<sizeof(int)*8>(d.y)<<endl;
    cout<<bitset<sizeof(int)*8>(d.z)<<endl;
    printf("%d %d %d %d",d.x,d.y,d.z,sizeof(d));
    return 0;
}