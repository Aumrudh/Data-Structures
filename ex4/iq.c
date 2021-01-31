#include"one.h"
queue createqueue(queue temp)
{
int ab;
printf("\nEnter the no of elements : ");
scanf("%d",&ab);

temp=(queue)malloc(sizeof(q));
temp->capacity=ab;
printf("\nCapacity : %d",temp->capacity);
temp->arr=(int*)malloc(sizeof(int)*(ab-1));
temp->front=0;
temp->rear=-1;
return temp;
}
int dequeue(queue Q)
{
if(isempty(Q))
{
printf("Queue empty");
exit(-1);
}
else
{
int ans;
Q->size--;

ans=Q->arr[Q->front];

Q->front=succ(Q->front,Q);
return ans;
}
}
void enqueue(int x,queue q1)
{
if(isfull(q1))
printf("Full queue");
else
{
q1->size++;
q1->rear=succ(q1->rear,q1);
q1->arr[q1->rear]=x;
}
}
static int succ(int value,queue q1)
{
if(++value==q1->capacity)
value=0;
return value;
}
int isempty(queue q1)
{
return q1->size==0;
}
int isfull(queue q1)
{
return q1->size==q1->capacity;
}


void spider()
{
int n,x,i,j,k=0,m,max,*a,*b,pow,c=0,*d;
queue Q;
printf("Enter the no of spiders : ");
scanf("%d",&n);
a=(int*)malloc(sizeof(int)*n);
b=(int*)malloc(sizeof(int)*n);
d=(int*)malloc(sizeof(int)*n);
printf("Enter the no of spiders to be selected : ");
scanf("%d",&x);
Q=createqueue1(Q);
for(i=0;i<n;i++)
{
printf("\nEnter power of spider %d:",i+1);
scanf("%d",&pow);
enqueue1(pow,Q,i+1);
b[i]=pow;
}
for(j=0;j<x;j++)
{
max=b[0];
for(i=1;i<n;i++)
{
if(max<b[i]&&b[i]>-1)
{
max=b[i];
m=i+1;
}
}
for(i=0;i<n;i++)
{
if(b[i]!=max&&b[i]!=0)
--b[i];
}
if(max==b[0])
m=1;
if(max==-1)
m=2;
b[m-1]=-1;
printf("%d",m);
}
}

queue createqueue1(queue temp)
{
int ab;
printf("\nEnter the no of elements:");
scanf("%d",&ab);
//queue temp;
temp=(queue)malloc(sizeof(q));
temp->capacity=ab;
printf("capacity:%d",temp->capacity);
temp->arr=(int*)malloc(sizeof(int)*(ab-1));
temp->front=0;
temp->rear=-1;
temp->pos=(int*)malloc(sizeof(int)*(ab-1));
temp->size=ab-1;
return temp;

}
void enqueue1(int x,queue q1,int y)
{
int a;
if(isfull(q1))
printf("Full queue");
else
{
q1->rear=succ(q1->rear,q1);
q1->arr[q1->rear]=x;
q1->pos[q1->rear]=y;
}
}

int dequeue1(queue Q)
{
if(isempty(Q))
{
printf("Queue empty");
exit(-1);
}
else
{
int ans;
Q->front=succ(Q->front,Q);
ans=Q->arr[Q->front];
Q->arr[Q->front]=0;
Q->front=succ(Q->front,Q);
return ans;
}
}                                
