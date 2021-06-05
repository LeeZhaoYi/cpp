#include<iostream>
using namespace std;
int i,j,n,m,u[10],v[10],w[10],dis[10];
int main()
{
	cin>>n>>m;
	
	for(i=1;i<=m;i++)
	{
		cin>>u[i]>>v[i]>>w[i];
	}
	dis[1]=0;
	for(i=2;i<=m;i++)
	{
		dis[i]=999999999;
	}
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			if(dis[v[j]]>dis[u[j]]+w[j])
			{
				dis[v[j]]=dis[u[j]]+w[j];
			}
		}
	}
	
	for(i=1;i<=n;i++)
	{
		cout<<dis[i]<<" ";
	}
	
	return 0;
}
/*
5 9
1 2 8
2 3 6
1 3 17
3 4 4 
4 5 6
5 1 5
5 3 3
5 2 10
1 4 3
*/
