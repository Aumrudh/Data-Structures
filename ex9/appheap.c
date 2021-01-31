#include"heap.h"
main()
{
   int ch,siz,i,no;
   heap h;
   printf("Enter heap size : ");
   scanf("%d",&siz);
   h=create(siz);
   while(1)
    {
      printf("1-Insert\n2-Delete\n3-Display\n");
      printf("Enter your choice : ");
      scanf("%d",&ch);
      switch(ch)
      {
        case 1:
		printf("Enter a number to insert : ");
 		scanf("%d",&no);
                h=insert(no,h);
           	break;
   	case 2:
          	h=deletemin(h);
                break;
        case 3:
                display(h); 
                break;
 	default:
      		printf("Wrong choice\n");
 		exit(1);
      }
    }
}
        
