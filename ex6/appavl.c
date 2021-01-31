#include"tree.h"
main()
{
 int k,che,ch,x,y,z,res;
 treeptr t,temp,temp1,temp2;
 while(1)
 {
  printf("\n\t1-Insert\n\t2-Delete\n\t3-Find\n\t4-Findmin\n\t5-Findmax\n\t6-Display\n\t7-Exit\n");
  printf("\tEnter your Choice : ");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1:
	  printf("\n Enter the element to be inserted : ");
	  scanf("%d",&x);
	  t=insert(x,t);
  	  break;
  case 2:
  	 printf("\nEnter the element to be deleted : ");
  	 scanf("%d",&y);
         t=Delete(y,t);
         break;
  case 3:
	  printf("\n Enter the element to be searched : ");
	  scanf("%d",&z);
	  temp=find(z,t);
	  if(temp!=NULL)
	     printf("\n%d Element present \n",temp->data);
	  else
	    printf("\nElement Not Present\n");
          break;
  case 4:
	  temp2=findmin(t);
	  printf("\n The minimum element in the tree is %d",temp2->data);
 	  break;
  case 5:
 	  temp2=findmax(t);
	  printf("\n The maximum element in the tree is %d",temp2->data);
           break;
 case 6:
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
         break;
 case 8:
         free(t);
         exit(1);
         break;
 default:
	   printf("\nWrong Choice\n");
	   exit(-1);
  }
 }
}
