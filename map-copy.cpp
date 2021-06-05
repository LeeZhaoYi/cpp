#include<iostream>
using namespace std;
int n,Max,head,tail,flog1=0,flog2=0,tx,ty,dMax;
int map[10][10],book[10][10],ax[8],ay[8];
ax[0]=-1;ax[1]=1;ax[2]=0;ax[3]=0;ax[4]=-1;ax[5]=-1;ax[6]=1;ax[7]=1;
ay[0]=0;ay[1]=0;ay[2]=-1;ay[3]=1;ay[4]=-1;ay[5]=1;ay[6]=-1;ay[7]=1;
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
		
	
	
	//////////////////////////////////////////////////////////////////////////
	for (int i=1;i<=n;i++)
    {
    	for (int j=1;j<=n;j++)
		{
			if(book[i][j]==0)
			{
				head=1;tail=2;
				que[head].x=i;
				que[head].y=j;
				book[i][j]=1;
				while(head!=tail)
				{
					for(int i=0;i<=7;i++)
					{
						tx=que[head].x+ax[i];
						ty=que[head].y+ay[i];
					}
					tx=que[head].x+1;
					ty=que[head].y;
					if(0<tx&&tx<=n&&0<ty&&ty<=n)
					{
						if(map[tx][ty]==que[head].h&&book[tx][ty]==0)
						{
								que[tail].x=tx;
								que[tail].y=ty;
								que[tail].h=map[tx][ty];//入队
								book[tx][ty]=1; 
								tail++;
						}
						if(map[tx][ty]>que[head].h)
						{
							flog1=1;
						}
						else if(map[tx][ty]<que[head].h)
						{
							flog2=1;
						}
					}
				}
					head++;
			}
			if(flog1==0&&flog2==1) Max++;

			if(flog2==0&&flog1==1) dMax++;
		
		}
	} 
	cout<<Max<<" "<<dMax;
	return 0;
} 

	

/*
5
5 7 8 3 1
5 5 7 6 6
6 6 6 2 8
5 6 3 5 8
7 1 0 1 7

5
8 8 8 7 7
8 8 8 8 7
7 7 7 7 7
7 8 8 7 8
7 8 8 8 8
*/









//转载于http://www.lizy.xyz/ 
