#include <iostream>
using namespace std;
int m,n,x,y,note[1000][1000];
int ax[4]=(1,2,3,4);
int ay[4]=(1,2,3,4);

struct zf
{
    int a;
    int b;
    int h;

}e[1001];

int main()
{
    for(int i=1;i<=m;i++)
    {
        cin>>m>>n;
        cin>>e[i].x>>e[i].y>>e[i].h;
    }

    bool cmp(node x,node y)
    {
        return x.h>y.h;
    }
    sort(e+1,e+m+1,cmp);
}
/*
2534
3512
28351
6618
1805
12884


1 2
3 4
1 3
1 4
2 4

*/
