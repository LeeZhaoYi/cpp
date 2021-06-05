#include<iostream> 
using namespace std;
int a[1000],x,y,n,m;
void dfs(int x)
{
	int t=x;
	if(2*x+1<=n)
	{
		if(a[2*x+1]>a[2*x])
		{
			t=2*x;
		}
		else
		{
			t=2*x+1;
		}
	}

	else if(2*x<=n)
	{
		t=2*x;	
	}
	
	
	if(a[t]<a[x])
	{
		swap(a[t],a[x]);
		dfs(t);
	}
	return;
}
int main()
{
	cin>>n;
	for (int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	//dfs(n);
	for(int i=n/2;i>=1;i--)
	{
		dfs(i);
	}
	m=n;
	while(n>1)
	{
		//S=a[1];
		swap(a[1],a[n]);
		n--;
		dfs(1); 
	}
	for(int i=1;i<=m;i++)
	{
		cout<<a[i]<<' ';
	}

}
//15 6 3 8 7 5 2 10 4 9 1 11 12 13 14 15
