#include"stack.h"
stack initialize()
{
    stack temp;
    temp=(node*)malloc(sizeof(node));
    if(temp==NULL)
     {
      printf("Memory Not Allocated\n");
      exit(0);
     }
    temp->next=NULL;
    return temp;
}
void push(char p,stack s)
{
  static int x=1;
  stack temp;
  int h;
  temp=(node*)malloc(sizeof(node));
  if(temp==NULL)
   {
    printf("Memory Not allocate\n");
    exit(0);
   }
     temp->data=p;
     temp->next=s->next;
     s->next=temp;
     h=top(s);
     printf("Top Element is : %c\n",h);
}
int pop(stack s)
{
  int a;
  if(s->next==NULL)
   {
    return -1;
   }
  else
  {
   stack temp;
   temp=s->next;
   s->next=s->next->next;
   a=temp->data;
   free(temp);
   return a;
  }
}
int top(stack header)
{
        stack t;
        t=header->next;
        return(t->data);
}
int ISEmpty(stack s)
{
   if(s->next==NULL)
   {
    return 1;
   }
   else
   {
     return 99;
   }
}
void display(stack s)
{
    stack temp;
    temp=s->next;
    if(temp==NULL)
     {
       printf("Stack Underflow\n");
       exit(0);
     }
    while(temp!=NULL)
     {
       printf("%c\t",temp->data);
       temp=temp->next;
     }
}
void bp(char s[],stack s1)
{
   char k,c;
   int i,flag=0,f=0;
   for(i=0;s[i]!='\0';i++)
    {
      if(s[i]=='{'||s[i]=='['||s[i]=='(')
        {
          push(s[i],s1);
        }
      if(s[i]=='}'||s[i]==']'||s[i]==')')
       {
        c=pop(s1);
        if(s[i]=='}'&&c=='{')
          {
            continue;
          }
        else if(s[i]==')'&&c=='(')
          {
            continue;
          }
        else if(s[i]==']'&&c=='[')
          {
            continue;
          }
        else
         {
          break;
         }
       }
    }
   f=ISEmpty(s1);
 if(f==1)
   {
     printf("Correct Sequence\n");
   }
   else
   {
     printf("Unbalanced\n");
   }
}
