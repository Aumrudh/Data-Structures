#include"list.h"
main()
{
  int ch,a,tt;
  position x,f,x2;
  char ni[20],n[20];
  list l;
  l=initialize();
  while(1)
  {
    printf("1-INSERT\n2-DELETE\n3-SEARCH\n4-DISPLAY");
    printf("\n5-FIND PREVIOUS NAME\n6-SORT BY AGE\n7-EXIT");
    printf("\nEnter your choice :");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:
         /*   printf("\nEnter the name after to which is to be inserted :");
            scanf("%s",ni);
            x=find(ni,l);                        
            if(x!=NULL)
            {
              printf("\nEnter the name to be inserted :");
              scanf("%s",n);
              printf("Enter the age to be inserted :");
              scanf("%d",&a);
              insert(a,n,x,l);*/
          //  }
       //     else
            {
              f=NULL;
         //     printf("\n Name is not found so insertion at last node :");
              printf("\nEnter the name to be inserted :");
              scanf("%s",n);
              printf("Enter the age to be inserted :");
              scanf("%d",&a);
              insert(a,n,f,l);
            }
            break;
      case 2:
            printf("\nEnter the name to be deleted :");
            scanf("%s",ni);
            x=find(ni,l);
            if(x!=NULL)
            {
              //x2=findprev(ni,l);
              del(ni,l);//x2);//,l);
            }
            else
            {
              printf("The name is not found!");
            }
            break;
      case 3:
            printf("\nEnter the name to be searched :");
            scanf("%s",ni);  
            x=find(ni,l);
            if(x==NULL)
            {
              printf("\nName is not found in the list!");
            }
            else
            {
              printf("The searched name is found!");
            }
            break;
      case 4:
            display(l);
            break;
   /*   case 5:
            tt=count(l);
            printf("The total no of node :%d",tt);       
            break;*/
      case 5:
            printf("Enter the name :");
            scanf("%s",ni);
            x=find(ni,l);
            if(x!=NULL)
            {
              x2=findprev(ni,l);
              printf("The previous name of %s is %s",x->name,x2->name);
            }
            else 
            {
              printf("The name is not found!");
            }
            break;
      case 6:
            sort(l);
            break;
      case 7:
            exit(1);
            break;
      default:
            exit(1);
}
}
} 

