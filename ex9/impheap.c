#include"heap.h"
heap create(int n)
{
   heap h;
   h=(heap)malloc(sizeof(struct node));
   h->array=(int*)malloc(n*sizeof(int));
   h->size=0;
   h->capacity=n;
   return h;
}
heap insert(int x,heap h)
{
  int i;
  if(!isfull(h))
  {//h->size++;
    for(i=++h->size;h->array[i/2]>x;i/=2)
    {
      h->array[i]=h->array[i/2];
    }
    h->array[i]=x;
    return h;
  }
  else
    return NULL;
}
int isfull(heap h)
{
    if(h->size==h->capacity)
       return 1;
    else
       return 0;
}
int isempty(heap h)
{
    if(h->size==0)
       return 1;
    else
       return 0;
}
void display(heap h)
{
   int i;
   for(i=1;i<=h->size;i++)
      {
         printf("%d\t",h->array[i]);
      }
}
heap deletemin(heap h)
{
   int child,x,i;
   if(!isempty(h))
     {
       x=h->array[h->size];
       h->size--;
       for(i=1;2*i<=h->size;i=2*i)
        {
          child=2*i;
          if((child!=h->size)&&(h->array[child+1]>h->array[child]))
            child=child+1;
          if(h->array[child]>x)
             h->array[i]=h->array[child];
          else
             break;
         }
      h->array[i]=x;
      return h;
     }
}


