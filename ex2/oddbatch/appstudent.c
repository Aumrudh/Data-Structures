#include "nheadf.h"
main()
{
 stud temp;
 list L1;
 poslist pl;
 L1=Initialize();
 pl=initialize();
 position p=L1;
 pos2 p1=pl;
 int x,ch,val,c=0,c1=0;
 char stuname[20];
 do
 {
  printf("\n\nEnter choice");
  printf("\nStudent List\n1.Insert\n2.Delete\n3.Printlist\n4.Insert\n5.Delete\n6.Printlist\n7.Printposition\n");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1:printf("Enter student to insert");
          scanf("%s%d%f",temp.name,&temp.rollno,&temp.cgpa);
          if(c!=0)
          {
          printf("Enter after which name");
          scanf("%s",stuname);
          p=Find(stuname,L1);
          }
          c++;
          Insert(temp,p,L1);
          break;
   case 2:printf("Enter name to delete");
          scanf("%s",stuname);
          Delete(stuname,L1);
          break;
   case 3:Printlist(L1);
          break;
   case 4:printf("Enter value to insert");
          scanf("%d",&val);
          if(c1!=0)
          {
          printf("Enter after which value");
          scanf("%d",&x);
          p1=find(x,pl);
 }
          c1++;
          insert(val,p1,pl);
          break;
   case 5:printf("Enter value to delete");
          scanf("%d",&val);
          deletee(val,pl);
          break;
   case 7:printpos(pl,L1);
          break;
   case 6:printlist(pl);
          break;
  }
 }while(1);
}

