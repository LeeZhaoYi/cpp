#include <iostream>
#include <queue>
using namespace std;
queue <int> qq;
int book[10],head,tail,tq[10],qn,ql,t;
int main()
{
	//cin>>qn;
	for(int i=1;i<=9;i++)
	{
		cin>>ql;
		qq.push(ql);
	}
	while(qq.size())
	{
		cout<<qq.front();
		qq.pop();
		t=qq.front();
		qq.pop();
		qq.push(t);	
	}
	return 0;
}
//6 3 1 7 5 8 9 2 4
