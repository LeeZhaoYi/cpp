#include<iostream>
using namespace std;
int n,m,map[1000],color[1000],s,no;
viod dfs(int step,int c);
{
	if(color[step]!==0)
	{
		if(color[step]!==c)
		{
			cout<<"NO";
			no=1;
		}
		return 0;
	}
	color[step]=c;
	for(int i=1;i<=n;i++)
	{
		if(map[step][i]!=0)
		{
			dfs(i,-c);
		}
	}

return 0;
}
int main()
{
	cin>>n>>m;
	for(int i=1;i<m;i++)
	{
		int x=0,y=0;
		cin>>x>>y;
		map[x][y]=1;
		map[y][x]=1;
	}
	for(int i=1;i<=n;i++)
	{
		c=-1;
		dfs(i,c);
	}
	if(no==0)
	{
		for(int i=1;i<=n;i++)
	{
		if(color[i]==1)
		{
			cout<<i<<" ";
		}
	}
	cout<<endl;
	for(int i=1;i<=n;i++)
	{
		if(color[i]==-1)
		{
			cout<<i<<" ";
		}
	}


    low=1;
    night=m;
    invd=()
    for(int j=1;j<=)
	return 0;
	}
