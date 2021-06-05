#include<iostream>
#include<malloc.h>
using namespace std;
int jp;
typedef struct stu
    {

        string name;
        int score;
        stu*next;
    };
bool init (stu*head)
    {

       head=(stu*)malloc(sizeof(stu));
       return 1;


    }
bool append (stu* head,stu a)
{
    if(!head)
    {
           return 0;
    }
    stu *h;
    h=head;
    while(1)
    {
        h=h->next;
        jp++;
        if(!h)
        {
            break;
        }
    }
    h=malloc(sizeof(stu));
    h.name=a.name;
    h.score=a.score;

return 1;

}
bool insert (stu *p,int u,stu y)
{
    if(u>jp)
    {
        return 0;
    }

    stu n;
    while(1)
    {
        n=n->next;
        u--;
        if(n=0)
        {
            break;
        }
    }
    stu *t;
    t=malloc(sizeof(stu))
    t.name=y.name;
    t.score=y.score;
    y->next=t->next;
    y->next=t;
    return 1;
    stu *t;
    t=malloc(sizeof(stu))
    t.name=y.name;
    t.score=y.score;
    y->next=t->next;
    y->next=t;
    return 1;
    bool insert (*stu search(string name)*stu h)
{
    *stu p=h;
    //stu n;
    while(p!=null)
    {
        if(p->name==name)
        {
            return p;
        }
        p=p->next;
    }
    return null;


}
int main()
{
    stu*head;
    init (head);
    stu* xm;
    xm.name="BB";
    xm.score=0;
    append(xm);
    insert (xh);
    xh.name="PP";
    xh.score=1;
    stu xe;
    append(xe);
    xe.name="SS";
    xe.score=9;


}
