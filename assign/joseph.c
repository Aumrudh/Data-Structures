#include<stdio.h>
#include<stdlib.h>
typedef struct ppl
{
int pos; //printf("\nEnter the no of people");
struct ppl *next;
}people;
struct ppl *ptrtonode;

int removepeople(int n,int m)
{

int i,count=0;
people *nw,*q,*r,*p;
nw=(people*)malloc(sizeof(people));

nw->pos=1;
nw->next=nw;
q=nw;

for(i=2;i<=n;i++)
{
r=(people*)malloc(sizeof(people));
r->pos=i;
r->next=nw;
q->next=r;
q=r;
}
while(nw->next!=nw)
{
q=nw;
r=q;
for(count=1;count<m;count++)
{
r=q;
q=q->next;
}
r->next=q->next;
nw=r->next;
q->next=NULL;
free(q);
q=NULL;
}
return (nw->pos);
}
main()

{

int n,m,res;
printf("\nEnter the no of people");
scanf("%d",&n);
printf("\nEnter the M value");
scanf(" %d",&m);
res=removepeople(n,m);
printf("\nThe player %d wins\n",res);
}

