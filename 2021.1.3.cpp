#include<iostream>
using namespace std;
int k,i,j,n,m,map[10][10],y,x,t,mix;
int main()
{
	cin>>n>>m;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==j)
			{
				map[i][j]=0;
			}
			else
			{
				map[i][j]=9999999;
			}
		 } 
	}
	for(i=1;i<=m;i++)
	{
		cin>>x>>y>>t;
		map[x][y]=t;
	}
	for(k=1;k<=n;k++)
	{
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				
				if(map[i][j]>map[i][k]+map[k][j])
				{
					map[i][j]=map[i][k]+map[k][j];
				}
			}
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			cout<<map[i][j]<<" ";
		}
		cout<<endl;
	}
	int wer=0;
	for(i=1;i<=n;i++)
	{
		wer=wer+map[i][1];
	}
	for(i=1;i<=n;i++)
	{
		wer=wer+map[1][i];
	}
	cout<<endl;
	cout<<wer;
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
