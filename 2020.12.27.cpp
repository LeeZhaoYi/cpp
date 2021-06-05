#include <iostream>
#include <vector>
using namespace std;
//vector <int>a[100000];
vector <vector <int> > a(100);
struct node
{
	int x;
	int y;
	int z;
};
int x,y,n,m,head=1,t,s,e,tail=2,book[100],que[1000];
int main()
{
	cin>>n>>m;
	for(int i=1;i<n;i++)
	{
		cin>>x>>y;
		a[x].push_back(y);
		a[y].push_back(x);
	}
	cin>>s>>e;
	que[head]=s;
	while(1)
	{
		t=que[head];
		for(int i=0;i<a[t].size();i++)
		{
			if(a[t][i]==e)
			{
			 	cout<<"YES"<<endl;
				break; 
			}
			else
			{
				if(book[a[t][i]]==0)
				{
					book[a[t][i]]=1;
					que[tail]=a[t][i];
					tail++;
				}
				
			}
		}
		head++;
	}
	cout<<"NO"<<endl; 
}
/*
5 6
1 2
1 3
2 3
2 4
3 4
3 5
1 5
*/
