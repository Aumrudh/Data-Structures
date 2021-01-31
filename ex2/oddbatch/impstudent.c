#include "nheadf.h"

position Find(elementname x[],list L)
{
 position p;
 p=L->next;
 while(p!=NULL)
 {
  if(strcmp(p->name,x)==0)
     return p;
  else
     p=p->next;
 }
}

position Findprev(elementname x[],list L)
{
 position p;
 p=L->next;
 while(p!=NULL)
 {
  if(strcmp(p->next->name,x)==0)
     return p;
  else
     p=p->next;
 }
}

void Insert(stud x,position p,list L)
{
 position temp;
 temp=(stud*)malloc(sizeof(stud));
 temp->rollno=x.rollno;
 temp->cgpa=x.cgpa;
 strcpy(temp->name,x.name);
 temp->next=p->next;
 p->next=temp;
}

void Delete(elementname x[],list L)
{
 position temp,prev,p;
 p=Find(x,L);
 if(p==L->next)
 {
  temp=p;
  L->next=p->next;
  free (temp);
 }
 else
 {
 prev=Findprev(x,L);
 temp=prev->next;
 prev->next=temp->next;
 free (temp);
 }
}

position Initialize()
{
 position temp;
 temp=(stud*)malloc(sizeof(stud));
 if(temp==NULL)
 {
  printf("No memory space \n");
  exit(-1);
 }
 else
 {
  strcpy(temp->name,"head");
  temp->rollno=0;
  temp->cgpa=0;
  temp->next=NULL;
 }
  return temp;
}

int Islast(position p,list L)
{
 stud s;
 printf("Enter name");
 scanf("%s",s.name);
 while(p->next==NULL)
 {
  if(strcmp(p->name,s.name)==0)
     return 1;
 }
 return 0;
}

void Printlist(list L)
{
 position p;
 p=L->next;
 while(p!=NULL)
 {
  printf("\n\nNAME:%s",p->name);
  printf("\nROLLNO:%d",p->rollno);
  printf("\nCGPA:%f",p->cgpa);
  p=p->next;
 }
}

void insert(elementtype x,pos2 p,poslist L)
{
 pos2 temp;
 temp=(pos1*)malloc(sizeof(pos1));
 temp->data=x;
 temp->next=p->next;
 p->next=temp;
}

void deletee(elementtype x,poslist L)
{
 pos2 prev,temp,p;
 p=find(x,L);
 if(p==L->next)
 {
  temp=p;
  L->next=p->next;
  free (temp);
 }
 else
 {
 prev=findprev(x,L);
 temp=prev->next;
 prev->next=temp->next;
 free(temp);
 }
}

pos2 find(elementtype x,poslist L)
{
 pos2 p;
 p=L->next;
 while(p!=NULL)
 {
  if(p->data==x)
     return p;
  else
     p=p->next;
 }
}

pos2 initialize()
{
 pos2 p;
 p=(pos1*)malloc(sizeof(pos1));
 if(p==NULL)
 {
  printf("NO memory space");
  exit(-1);
 }
 else
 {
  p->data=0;
  p->next=NULL;
 }
 return p;
}

void printpos(poslist pl,list L)
{
 pos2 p1;
                      position p;
 int c=0;
 p=L->next;
 while(p!=NULL)
 {
  c++;
  p1=pl->next;
  while(p1!=NULL)
  {
   if(p1->data==c)
   {
    printf("\n\nNAME:%s",p->name);
    printf("\nROLLNO:%d",p->rollno);
    printf("\nCGPA:%f",p->cgpa);
    break;
   }
   else
     p1=p1->next;
  }
  p=p->next;
 }
}

void printlist(poslist L)
{
 pos2 p;
 p=L->next;
 while(p!=NULL)
 {
  printf("\n%d",p->data);
  p=p->next;
 }
}

pos2 findprev(elementtype x,poslist L)
{
 pos2 p;
 p=L->next;
 while(p!=NULL)
 {
  if(p->next->data==x)
     return p;
  else
p=p->next;
 }
}

         
