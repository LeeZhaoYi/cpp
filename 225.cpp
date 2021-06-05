#include<iostream>
using namespace std;
void f(int a[10])
{
	 a[1]=a[1]+1;
}
int main()
{
	  int a[10];
	  a[1]=1;
	  f(a);
	  cout<<a[0];
}
/*
 
*/
