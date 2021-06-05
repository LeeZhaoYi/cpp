#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <malloc.h>
using namespace std;
int main()
{
	int *p;
	p=(int*)malloc(sizeof(int)*5);
	p[0]=1;
	p[1]=2;
	p[2]=3;
	p[3]=4;
	p[4]=5;
	cout<<*p;
}
