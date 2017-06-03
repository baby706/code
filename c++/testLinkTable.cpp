/*************************************************************************
    > File Name:  testLinkTable.cpp
    > File Path:  /Users/liangbo/Code/testLinkTable.cpp
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
	struct  student* next;
}node;

//单链表的建立
node *creat()
{
	node *head,*p,*s;
	int x,cycle = 1;
	head = (node*)malloc(sizeof(node));
	p = head;
	while(cycle)
	{
		printf("please input the data:");
		scanf("%d",&x);
		if(x!=0)
		{
			s = (node*)malloc(sizeof(node));
			s->data = x;
			printf("%d\n",s->data );
			p->next = s;
			p = s;
		}
		else
			cycle = 0;
	}
	head = head -> next;
	p -> next =  NULL;
	printf("\n yyy %d\n",head->data );
	return head;
}

//测长
int length(node* head)
{
	int n = 0;
	node *p;
	p = head;
	while(p!=NULL)
	{
		p=p->next;
		n++;
	}
	return n;
}

//打印
void print(node *head)
{
	node *p;
	int n;
	n = length(head);
	printf("Now,these %d records are:\n",n );
	p = head;
	if(head!=NULL)
		while(p!=NULL)
		{
			printf("\n    uuu   %d\n",p->data );
			p = p->next;
		}
}

//删除
node *del(node *head,int num)
{
	node *p1,*p2;
	p1 = head;
	while(num !=p1->data && p1->next!=NULL)
	{
		p2 = p1;
		p1 = p1 -> next;
	}
	if( num ==  p1->data)
	{
		if(p1 == head)
		{
			head = p1->next;
			free(p1);
		}
		else
		{
			p2->next = p1->next;
		}
	}
	else
	{
		printf("%d could not been found\n",num );
	}
	return head;
}

//插入
node *insert(node *head,int num)
{
	node *p0,*p1,*p2;
	p1 = head;
	p0 = (node*)malloc(sizeof(node));
	p0->data = num;
	while(p0->data > p1->data && p1->next!=NULL)
	{
		p2 = p1;
		p1 = p1 -> next;
	}
	if(p0->data <= p1->data)
	{
		if(head == p1)
		{
			p0->next = p1;
			head = p0;
		}
		else
		{
			p2->next = p0;
			p0->next = p1;
		}
	}
	else
	{
		p1->next = p0;
		p0->next = NULL;
	}

	return head;

}

//排序
node *sort(node *head)
{
	node *p;
	int n;
	int temp;
	n = length(head);
	if(head == NULL || head->next == NULL)   //空链表
		return head;
	p = head;
	for(int j = 1;j < n;++j)
	{
		p = head;
		for(int i = 0;i < n - j;++i)
		{
			if(p->data > p->next->data)
			{
				temp = p -> data;
				p->data = p->next->data;
				p->next->data = temp;
			}
			p = p->next;
		}
	}
	return head;
}

//逆置
node *reverse(node *head)
{
	node *p1,*p2,*p3;
	if(head == NULL || head->next == NULL)
		return head;
	p1 = head;
	p2 = p1 -> next;
	while(p2)
	{
		p3 = p2 -> next;
		p2 -> next = p1;
		p1 = p2;
		p2 = p3;
	}
	head -> next = NULL;
	head = p1;
	return head;
}
int main(int argc, char const *argv[])
{
	node *head = creat();
	print(head);
	print(del(head,4));
	print(insert(head,2));
	print(sort(head));
	print(reverse(head));
	return 0;
}







