#include "hf.h"
int main()
{
	int x,choice,che;
	splay *root = NULL;
	printf("\n1 - Insert\n2 - Delete\n3 - Search\n4 - Display\n5 - Exit");
	do{
            printf("\nEnter your choice : \t");
            scanf("%d",&choice);
	    switch(choice)
             {
                case 1: printf("Enter a Number to insert : ");
                        scanf("%d",&x);
			if((t = find(x,root)) != NULL)
                        	root = splays(x,root);
			else
			{
				root = insert(x,root,NULL);
				root = splays(x,root);
			}
                        break;
		case 2: printf("Enter the number to delete : ");
			scanf("%d",&x);
			if((t = find(x,root)) != NULL)
                        {
                                root = splays(x,root);
				root = delete(root);
				update(root,NULL);
				printf("%d is deleted successfully ...\n",x);
                        }
                        else
                                printf("Deletion Failed ...\n");
			break;
		case 3: printf("Enter a number to search : ");
			scanf("%d",&x);
			if((t = find(x,root)) != NULL)
			{
				printf("The Searched element is found ...\n");
				root = splays(x,root);
			}
			else
				printf("The searched element is not found ...\n");
			break;
		case 4: if(root == NULL)
				printf("There is no element in the tree...\n");
			else{
			      printf("\n");
			      printf("\n\t1-Inorder\n\t2-Preorder\n\t3-Postorder\n");
  		              printf("Enter your choice : ");
  			      scanf("%d",&che);
			      if(che==1)
          			 inordertravresal(root);
			      else if(che==2)
 			          preordertravresal(root);
 		 	      else if(che==3)
			           postordertravresal(root);
			      else
      			          exit(-1);
				//display(root);
                            }
			break;
		case 5: free(root);
			exit(1);
        }
	  }while(1);
}

