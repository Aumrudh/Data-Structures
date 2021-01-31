#include"person.h"
void main()
{
     list temp,l1,pt;
     int i,ch,pos,z;
     char tempn[10];
     person p;
     l1=Initialize();
     printf("Enter the no of elements:");
     scanf("%d",&z);
     printf("\nEnter the elements:");
     for(i=0;i<z;i++)
      {
     //    printf("Enter name to be inserted\n");
       //  scanf("%s",p.name);
         printf("Enter Age\n");
         scanf("%d",&p.age);
    //     printf("Enter Salary\n");
       //  scanf("%d",&p.salary);
         pt=(person*)malloc(sizeof(person));
         temp->next->age=pt->age;
         pt->age=p.age;
         pt->next->age=NULL;
         temp=pt->age;
      }
     do
     {
      printf("1-Insert\n2-Delete\n3-Find\n4-Find Previous Node\n");
      printf("5-Display\n6-Sort\nEnter Your Choice\n");
      scanf("%d",&ch);
      switch(ch)
      {
       case 1:
               printf("Enter name to be inserted\n");
               scanf("%s",p.name);
               printf("Enter Age\n");
               scanf("%d",&p.age);
               printf("Enter Salary\n");
               scanf("%d",&p.salary);
               printf("After Which name the new data must be inserted\n");
               scanf("%s",tempn);
               pt=Find(tempn,l1);
               Insert(p,pt,l1);
               break;
       case 2:
              printf("Enter the name to be deleted\n");
              scanf("%s",tempn);
              Delte(tempn,l1);
              break;
       case 3:
              printf("Enter name of the person to be searched\n");
              scanf("%s",tempn);
              pos=Find(tempn,l1);
              printf("Present at position %d\n",pos);
              break;
       case 4:
               printf("Enter Name of the person whose previous node is to be found\n");
               scanf("%s",tempn);
               //pos=Findprev(tempn,l1);
               printf("Prevois Position of give Name %d\n",pos);
               break;
       case 5:
               Display(l1);
               break;
       case 6:
               sort(l1);
               break;
       default:
               printf("Invalid Choice\n");
               break;
      }
     }while(ch>6);
}
