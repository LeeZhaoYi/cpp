#include <iostream>
//#include <cstdios>

using namespace std;


typedef struct _BiTree
{
    int e;
    struct _BiTree *lchild;
    struct _BiTree *fchild;
}BiTree;
void dfs(BiTree *T)
{
    if(T)
    {
        cout<<T->e;
        dfs(T->fchild);
        dfs(T->lchild);
    }

}
int main()
{
    BiTree Root;
    BiTree *N1=(BiTree*)malloc(sizeof(BiTree));
    Root.e=8;
    Root.lchild=N1;
    N1->e=1;
    N1->fchild=NULL;
    BiTree *N2=(BiTree*)malloc(sizeof(BiTree));
    N1->lchild=N2;
    N2->lchild=NULL;
    N2->fchild=NULL;
    dfs(&Root);
}
