#include <iostream>
using namespace std;
int m,n,x,y,map[20][20],ink[100],c,NO;
void dfs(int step,int c)
{
    if(ink[step]!=0)
        if(ink[step]!=c)
        {
            cout<<"NO!";
            NO=1;
            return;
        }
        else
            return;

        ink[step]=c;

        if(NO==0)
        {
            for(int i=1;i<=n;i++)
            {
                if(ink[i]==1)
                    cout<<i<<" "
            }
            cout<<endl;
            for(int i=1;i<=n;i++)
            {
                if(ink[step]==-1)
                    cout<<"YES!";
            }
        }
for(int i=1;i<=n;i++)
 {
     if(map[step][i]!=0)
     {
         dfs(i,-c);
     }

}

int mian()
{
 cin>>n>>m;
 for(int i=1;i<=n;i++)
 {
     cin>>x>>y;
     map[x][y]=1;
     map[y][x]=1;
 }


 for(int i=1;i<=n;i++)
     {
         c=-1;
         dfs(i,c);
     }




 }

return 0;

}
