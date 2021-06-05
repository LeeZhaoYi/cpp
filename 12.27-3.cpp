#include <iostream>
#include <queue>
using namespace std;
queue <int> que;
int book[100],head,tail,t;
int main()
{
	que.push(5);
	while(que.size())
	{
		t=que.front();
		que.pop();
		if(t==17)
		{
			cout<<"YES";
			return 0;
		}
		if(book[t-1]==0)
		{
			que.push(t-1);
			book[t-1]=1;
		}
		if(book[t+1]==0)
		{
			que.push(t+1);
			book[t+1]=1;
		}
		if(book[2*t]==0)
		{
			que.push(2*t);
			book[2*t]=1;
		}
	}
	cout<<"NO";
	return 0;
}
