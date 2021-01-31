#include"game.h"
stack intialise()
{
 stack s;
 s=(node*)malloc(sizeof(node));
 if(s==0)
  printf("Memory allocation failed");
 return s;
}
void push(int a,stack s)
{
position temp;
temp=(node*)malloc(sizeof(node));
if(temp==NULL)
 printf("Error");
else
{
 temp->data=a;
 temp->next=s->next;
 s->next=temp;
}
}
int pop(stack s)
{
 int x;
 position temp;
 if(isempty(s))
  printf("Error");
 else
 {
  x=s->next->data;
  temp=s->next;
  s->next=s->next->next;
  free(temp);
 return x;
 }
}
int isempty(stack s)
{
  return s->next==NULL;
}
void display(stack a)
{
 position w;
 w=a->next;
 while(w!=NULL)
 {
  printf("%d\t",w->data);
  w=w->next;
 }
}

