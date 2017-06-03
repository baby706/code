/*************************************************************************
    > File Name:  circleLinkTable.cpp
    > File Path:  /Users/liangbo/Code/circleLinkTable.cpp
    > Author:     Liang Bo
    > Mail:       cs-b@163.com 
    > Funtion:
    > Build Time: 
 ************************************************************************/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#define ERROR 0    
using namespace std;

typedef struct LNode
{
	int data;
	struct LNode *link;
}LNode,*LinkList;

//n个人，从k开始数，数到m就出列，下个人继续数
void JOSEPHUS(int n,int k,int m)    
{
	LinkList p,r,list,curr;
	p = (LinkList)malloc(sizeof(LNode));
	p->data = 0;
	p->link = p;
	curr = p;
	for(int i = 1;i<n;i++)
	{
		LinkList t = (LinkList)malloc(sizeof(LNode));
		t->data = i;
		t->link = curr->link;
		curr->link = t;
		curr = t;
	}

	r = curr;
	while(k--) r=p,p = p->link;
	while(n--)
	{
		for(int s = m-1;s--;r=p,p=p->link);
			r->link=p->link;
		printf("%d->\n",p->data );
		free(p);
		p = r->link;
	}
}


int main(int argc, char const *argv[])
{
	JOSEPHUS(7,4,3);
	return 0;
}







