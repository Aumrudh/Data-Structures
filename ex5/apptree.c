#include"tree.h"
main()
{
 int k,che,ch,x,y,z,res,p;
 treeptr t,temp,temp1,temp2;
 while(1)
 {
  printf("\n\t1-Insert\n\t2-Delete\n\t3-Find\n\t4-Findmin\n\t5-Findmax\n\t6-Display\n\t7-Count\n\t8-Exit\n");
  printf("\tEnter your Choice : ");
  scanf("%d",&ch);
  if(ch==1)
  {
   printf("\n Enter the element to be inserted : ");
   scanf("%d",&x);
   t=insert(x,t);
  }
  else if(ch==2)
  {
   printf("\nEnter the element to be deleted : ");
   scanf("%d",&y);
   t=Delete(y,t);
  }
  else if(ch==3)
  {
   printf("\n Enter the element to be searched : ");
   scanf("%d",&z);
   temp=find(z,t);
   if(temp!=NULL)
    printf("\n%d Element present \n",temp->data);
   else
    printf("\nElement Not Present\n");
  }
  else if(ch==4)
  {
   temp2=findmin(t);
   printf("\n The minimum element in the tree is %d",temp2->data);
  }
  else if(ch==5)
  {
   temp2=findmax(t);
   printf("\n The maximum element in the tree is %d",temp2->data);
  }
 else if(ch==6)
 {
 printf("\n\t1-Inorder\n\t2-Preorder\n\t3-Postorder\n");
 printf("Enter your choice : ");
  scanf("%d",&che);
  if(che==1)
   inordertravresal(t);
  else if(che==2)
   preordertravresal(t);
  else if(che==3)
   postordertravresal(t);
  else
    exit(-1);
  }
 else if(ch==7)
  {
   p=count(t);
   printf("Total Number of Nodes is %d \n",p); 
  }
 else
  {
   printf("\n Invalid option\n");
   exit(-1);
}
}
}

