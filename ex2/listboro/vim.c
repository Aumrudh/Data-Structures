#include"list.h"
void sort(list l)
{
  position temp;
  temp=(position)malloc(sizeof(position));
  position p,q;
  for(p=l->next;p->next!=NULL;p=p->next)
  {
    for(q=p->next;q!=NULL;q=q->next)
    {
      if(p->age>q->age)
      {
        char r1[10],r2[10],r3[10];
        int rr1,rr2,rr3;
        strcpy(r1,p->name);
        strcpy(r2,q->name);
        strcpy(p->name,r2);
        strcpy(q->name,r1);
        rr1=p->age;
      	rr2=q->age;
  	p->age=rr2;
  	q->age=rr1;
      }
    }
  }
}
position find(char n[],list l)
{
  position p;
  p=l->next;
  while(p!=NULL)
  {  
    if(strcmp(n,p->name)==0)
    {
      return p;
    }
    else
      p=p->next;
  }
  position z=NULL;
  return z;
}
position findprev(char n[],list l)
{
  position p,temp;
  p=l->next;
  while(p->next!=NULL)
  {
    temp=p->next;
    if(strcmp(n,temp->name)==0)
    {
      return p;
    }
    else
      p=p->next;
  }
  position z=NULL;
  return z;
}
void display(list l)
{
  position p=l->next;
  printf("\nName\tAGE\n");
  while(p!='\0')
  {
    printf("\n%s \t ",p->name);
    printf("%d \n ",p->age);
    p=p->next;
  }
}
int count(list l)
{
  position p;
  int count=1;
  p=l->next;
  while(p!=NULL)
  {  
    count++;
    p=p->next; 
  }
  return count;
}
void insert(int x,char n[],position p,list l)
{
  position temp;
  temp=(position)malloc(sizeof(position));
  temp->age=x;
  strcpy(temp->name,n);
  if(p==NULL)
  {
    position p1,q;
    q=l;
    p1=l->next;
    while(p1!=NULL)
    { 
      q=q->next;
      p1=p1->next;
    }
    temp->next=NULL;
    p1=temp;
    q->next=p1;
  }
  else 
  {
    temp->next=p->next;
    p->next=temp;
  }
  printf("\nThe node is successfully inserted!");
}
void del(char ni [],list l )
{
  position temp,p;
  temp=findprev(ni,l);
  printf("hello\n");
  p=temp->next;
  temp->next=p->next;
  printf("\nThe node is deleted successfully!");
//  free(temp);  
}
position initialize()
{
  position temp;
  temp=(position)malloc(sizeof(position)); 
  if(temp==NULL)
  {
    printf("\nError in initialization!");
  }
  else
  {
    temp->age=0;
    strcpy(temp->name," ");
    //printf("%d%s",temp->age,temp->name);
    temp->next=NULL;
    return temp;
  }
}


