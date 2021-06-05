#include <iostream>
#include <malloc.h>
using namespace std;
	typedef struct node
	{
		int data;
		node* next;
	}node;
	int main()
	{
		//node p;
		//	p.next=(node*malloc(sizeof(node)));
		node *h;
		node *p=h;
		int n=10; 
		while(n--)
		{
			p=p->next; 
			p=(node*)malloc(sizeof(node));
		}
	}
