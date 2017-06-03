/*************************************************************************
    > File Name:  doubleLinkTable.cpp
    > File Path:  /Users/liangbo/Code/doubleLinkTable.cpp
    > Author:     Liang Bo
    > Mail:       cs-b@163.com 
    > Funtion:
    > Build Time: 
 ************************************************************************/

#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

typedef struct student
{
	int data;
	struct student *next;
	struct student *pre;
}dnode;

//建立链表
dnode *creat()
{
	dnode *head,*p,*s;
	int x,cycle = 1;
	head = (dnode*)malloc(sizeof(dnode));
	p = head;
	while(cycle)
	{
		printf("please input the data:");
		scanf("%d",&x);
		if(x!=0)
		{
			s = (dnode*)malloc(sizeof(dnode));
			s->data = x;
			printf("%d\n",s->data );
			p->next = s;
			s->pre = p;
			p = s;
		}
		else
			cycle = 0;
	}
	head = head -> next;
	head -> pre = NULL;
	p -> next = NULL;
	printf("   yyy    %d\n",head->data);
	
	return head;

}

//删除节点
dnode *del(dnode *head,int num)
{
	dnode *p1,*p2;
	p1 = head;
	while(num != p1->data && p1->next!=NULL)
	{
		p1 = p1 -> next;
	}
	if(num == p1->data)
	{
		if(p1 == head)
		{
			head = head -> next;
			head -> pre = NULL;
			free(p1);
		}
		else
			if(p1->next == NULL)
			{
				p1->pre->next=NULL;
				free(p1);
			}
			else
			{
				p1->next->pre = p1->pre;
				p1->pre->next = p1->next;
			}

	}
	else
	{
		printf("%d could not been found\n",num );
	}
	return head;

}

//插入节点
dnode *insert(dnode *head,int num)
{
	dnode *p0,*p1;
	p1 = head;
	p0 = (dnode*)malloc(sizeof(dnode));
	p0->data = num;
	while(p0->data > p1->data && p1->next!=NULL)
	{
		p1 = p1->next;
	}
	if(p0->data <= p1->data)
	{
		if(head == p1)
		{
			p0->next = p1;
			p1->pre = p0;
			head = p0;
		}
		else
		{
			p1->pre->next = p0;
			p0->next = p1;
			p0->pre = p1->pre;
			p1->pre = p0;
		}
	}
	else
	{
		p1->next = p0;
		p0->pre = p1;
		p0->next = NULL;
	}

	return head;
}

//显示
void print(dnode* head)
{
	dnode* p;
	p = head;
	if(head != NULL)
		while(p!=NULL)
		{
			printf("  uuu   %d\n",p->data );
			p = p -> next;
		}
}


int main(int argc, char const *argv[])
{
	dnode* head = creat();
	print(head);
	return 0;
}







