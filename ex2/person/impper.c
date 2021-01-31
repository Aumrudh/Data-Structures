  #include"person.h"
position Find(char tname[10],list l)
{
    position p;

    p=l->next; // start with first node
    printf("Inside Find FN\n");
    while(p!=NULL)
     {
             printf("Inisde WHile\n");
       if(strcmp(p->name,tname)==0)
        {
                 printf("nside String cmpare if\n");
          return p;  //If data is equal to x then return pointer to node
        }
       else
       {
         p=p->next;   //If data is not equal to x then move to next node
       }
     }
}
position Findprev(char tname[],list l)
{
    position p;
    p=l->next;

    while(p->next!=NULL)
     {
       if(strcmp(p->next->name,tname)==0)
        {
           return p;  //If data is equal to x then return pointer to node
        }
       else
       {
         p=p->next;   //If data is not equal to x then move to next node
       }
     }
}
int ISEmpty(list l)
{
   return l->next==NULL;
}
position Initialize()
{
   position temp;
   temp=(person*)malloc(sizeof(person));
   if(temp==NULL)
    {
      printf("Not Allocated Header Node\n");
      exit(-1);
    }
  else
    {
      temp->age=0;
      temp->next=NULL;
      return temp;
    }
}
void Insert(person pe,position pos,list l)
{
   position temp,p;
   temp=(person*)malloc(sizeof(person));
   if(temp==NULL)
    {
      printf("Not Allocated Header Node\n");
      exit(-1);
    }
  temp->age=pe.age;
  temp->next=p->next;
  p->next=temp;
}
void Delte(char tname[],list l)
{
    position temp,prev;
    prev=Findprev(tname,l);
    if(ISLast(prev,l)==1)
      {
        printf("The Element is not Present in the list\n");
        return;
      }
    else
      {
        temp=prev->next;
        prev->next=temp->next;
        free(temp);
      }
}
int ISLast(position p,list l)
{
    return p->next==NULL;
}
void Display(list l)
{
   position p;
   p=l->next;
   while(p!=NULL)
    {
     printf("%s\t",p->name);
     printf("%d\t",p->age);
     printf("%d\t",p->salary);
     p=p->next;
    }
}
void sort(list l1)
{
   position p,q,temp;
   p=l1->next;
   q=p->next;
   for(;p!=NULL;p=p->next)
    {
      for(;q!=NULL;q=q->next)
         {
          if(p->age>q->age)
            {
              temp=p;
              p=q;
              q=temp;
            }
         }
    }
}
