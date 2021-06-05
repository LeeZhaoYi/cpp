#include<iostream>
using namespace std;
int a[10][10];
int m,n,x,y,head=1,tail=2,que[100],book[100],e;
int main()
{
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		cin>>x>>y;
		a[x][y]=1;
	}
	que[head]=1; 
	while(head<tail)
	{
		int t=que[head];
		for(int i=1;i<=n;i++)
		{
			if(a[t][i]==1&&book[i]=0)
			{
				que[tail]=i;
				book[i]=1;
				tail++;
				if(i==e)
				{
					cout<<"yes";
					return 0;
				}
			}
		}
		head++;
	}
	cout<<"no";return 0;
 } 
