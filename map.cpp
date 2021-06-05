#include<iostream>
using namespace std;
int n,Max,head,tail,flog,tx,ty;
int map[10][10],book[10][10];
struct none
{
	int x;int y;int h;
 } que[1000];
int main()
{
	cin>>n;
    for (int i=1;i<=n;i++)
    {
    	for (int j=1;j<=n;j++)
		{
			cin>>map[i][j];	
		}
		
	}
	for (int i=1;i<=n;i++)
    {
    	for (int j=1;j<=n;j++)
		{
			if(book[i][j]==0)
			{
				head=1;tail=2;
				book[i][j]=1;
				que[head].x=i;
				que[head].y=j;
				que[head].h=map[i][j];
				while(head<tail)
				{
					tx=que[head].x-1;
					ty=que[head].y;
					if(0<tx<=n&&0<ty<=n)
					{
						if(map[tx][ty]>que[head].h)
						{
							flog=1;
							break;//jump of it
						}
						else if(map[tx][ty]==que[head].h)
						{
							que[tail].x=tx;
							que[tail].y=ty;
							que[tail].h=map[tx][ty];
							tail++;
							book[tx][ty]=1;
							//break;
						}
						head++;
						if(flog==0) Max++;
					}
				}
				while(head<tail)
				{
					tx=que[head].x+1;
					ty=que[head].y;
					if(0<tx<=n&&0<ty<=n)
					{
						if(map[tx][ty]>que[head].h)
						{
							flog=1;
							break;//jump of it
						}
						else if(map[tx][ty]==que[head].h)
						{
							que[tail].x=tx;
							que[tail].y=ty;
							que[tail].h=map[tx][ty];
							tail++;
							book[tx][ty]=1;
							//break;
						}
						head++;
						if(flog==0) Max++;
					}
				}
				while(head<tail)
				{
					tx=que[head].x;
					ty=que[head].y-1;
					if(0<tx<=n&&0<ty<=n)
					{
						if(map[tx][ty]>que[head].h)
						{
							flog=1;
							break;//jump of it
						}
						else if(map[tx][ty]==que[head].h)
						{
							que[tail].x=tx;
							que[tail].y=ty;
							que[tail].h=map[tx][ty];
							tail++;
							book[tx][ty]=1;
							//break;
						}
						head++;
						if(flog==0) Max++;
					}
				}
				while(head<tail)
				{
					tx=que[head].x;
					ty=que[head].y+1;
					if(0<tx<=n&&0<ty<=n)
					{
						if(map[tx][ty]>que[head].h)
						{
							flog=1;
							break;//jump of it
						}
						else if(map[tx][ty]==que[head].h)
						{
							que[tail].x=tx;
							que[tail].y=ty;
							que[tail].h=map[tx][ty];
							tail++;
							book[tx][ty]=1;
							//break;
						}
						head++;
						if(flog==0) Max++;
					}
				}
				
			}
		}
		
	}
	cout<<Max;
} 
/*
5
5 7 8 3 1
5 5 7 6 6
6 6 6 2 8
5 6 3 5 8
7 1 0 1 7
*/
