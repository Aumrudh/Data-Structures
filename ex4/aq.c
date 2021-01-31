#include"one.h"
main()
{
    queue Q1;
    int ch,a,b,n;
    Q1=createqueue(Q1);
    if(!Q1)
     {
	printf("\nQueue not created");
	exit(-1);
     }
    while(1)
     {
	printf("\n1-Enqueue\n2-dequeue\n3-spider problem \n4-exit\nEnter Your Choice : ");
	scanf("%d",&ch);
	switch(ch)
	{
	 case 1:
		printf("Enter the element to be enqueued : ");
		scanf("%d",&a);
		enqueue(a,Q1);
		break;
	case 2:
		printf("Dequeued element : ");
		b=dequeue(Q1);
		printf("%d\n",b);
		break;
	case 3:
		spider();
	default:
		exit(-1);
	}
     }
}

