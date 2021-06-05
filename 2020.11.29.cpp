#include<bits/stdc++.h>
using namespace std;
int a[100][100];
int s,m,n,head=1,tail=2,que[100],book[100],e,book1[100],q[100],x,y,t;
int main()
{
	cin>>n>>m;
	cin>>s>>e;
	for(int i=1;i<=m;i++)
	{
		cin>>x>>y;
		a[x][y]=1;
	}
	que[head]=e;
	book[e]=1; 
	while(head<tail)
	{
		t=que[head];
		for(int i=1;i<=n;i++)
		{
			if(a[i][t]==1&&book[i]==0)
			{
				que[tail]=i;
				book[i]=1;
				tail++;
			}
		}
		head++;
	}
//	int p;
//	p=;
	memcpy(book1,book,sizeof(book));
	for(int i=1;i<=n;i++)
	{
		if(book[i]==0)
		{
			for(int j=1;j<=n;j++)
			{
				if(a[j][i]==1&&book[j]==1)
				{
					book1[j]=0;
				}
			}
		}
		
	}
	//p=;
	head=1;
	tail=2;
	memset(que,0,sizeof(que));
	que[head]=e;
	//book[e]=1; 
	while(head<tail)
	{
		t=que[head];
		for(int i=1;i<=n;i++)
		{
			if(a[i][t]==1&&book1[i]==1)
			{
				que[tail]=i;
				book1[i]=0;
				tail++;
				q[i]=q[t]+1;
			}
		}
		head++;
	}
		cout<<q[s]; 
} 
/*
6 6
1 5
1 2
1 3
2 5
2 6
3 4
4 5
*/
