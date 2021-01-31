#include"game.h"
main()
{
 int cn;
 stack s,s1;
 int g,a[10],b[10],sum=0,count=0,x,i,n,m;
 printf("\n Enter no of games:");
 scanf("%d",&g);
 if(g==0 || g>50)
  printf("Error in input");
 for(i=1;i<=g;i++)
 {
  printf("\n Enter no of elements in stack A&B and x value:");
  scanf("%d%d%d",&n,&m,&x);
  //if(n==0 || m>10^5 || x==0 || x==10^9)
  // printf("Error in input");
  s=intialise();
  s1=intialise();
 printf("\n Enter stack A value to push!");
 for(i=0;i<n;i++)
 { 
  scanf("%d",&a[i]);
  push(a[i],s);
 }
 printf("\n Enter stack B value to push!");
 for(i=0;i<m;i++)
 {
  scanf("%d",&b[i]);
  push(b[i],s1);
 }
 }
 printf("The stack elements are\n");
 display(s);
 printf("\n");
 display(s1);
printf("\n Pop operation!");
printf("\nThe sum of your poppedvalue should not exceed x!");
while(1)
{
 printf("\nEnter which stack to pop 1-stackA 2-stackB:");
 scanf("%d",&cn);
 if(cn==1)
 {
  sum+=pop(s);
  count++;
  printf("The your sum value and score: %d %d",sum,count);
 }
 else if(cn==2)
 {
  sum+=pop(s1);
  count++;
  printf("The your sum value and score: %d %d",sum,count);
 }
 else if(cn==3)
 {
   printf("The your score is:%d!\n",count);
   exit(0);
 }
if(sum==x || sum>x)
{
 printf("\n You're disqualified!");
 printf("\n Your score is:%d\n",count);
 exit(0);
}
}
}

