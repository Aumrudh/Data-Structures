#include"tree.h"
main()
{   
   int choice,val,data,var,fl=0;
   while(1)
    {       
       printf("\n\t\t1-Insert\n\t\t2-Search\n\t\t3-Display\n\t\t4-Exit\n");
       printf("Enter your choice : ");
       scanf("%d",&choice);
       switch(choice)
        {     
          case 1:
                  printf("Enter the number to add : ");
		  scanf("%d",&val);
		  insert(val);
		  inorder(root);
	          break;
          case 2:
		  printf("Enter search element : ");
		  scanf("%d",&val);
		  search(val);
	          preorder(root);
                  printf("\n %d is present",val);
		  break;
	 case 3:
	 	inorder(root);
		break;
	 case 4:
		fl=1;
		exit(1);
		break;
	default:
                 printf("\nInvalid Choice\n");
                 exit(1);
       }
    } 
} 

