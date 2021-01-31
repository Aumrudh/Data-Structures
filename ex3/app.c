#include"stack.h" 
main()
{
    int ch;
    char t[10],temp,key;
    stack s,s1;
    s=initialize();
    s1=initialize();
    while(1)
    {
        printf("1-PUSH\n2-POP\n3-DISPLAY\n4-Balancing_Paranthesis\n");
        printf("Enter the choice number\n");
        scanf(" %d",&ch);
        switch(ch)
        {
        case 1:

           printf("Enter the element to be pushed : ");
           scanf(" %c",&key);
           push(key,s);
        break;
        case 2:
          temp=pop(s);
          if(temp==-1)
             printf("Stack Underflow\n");
          else
             printf("The popped Element is %c\n",temp);
        break;
        case 3:
           display(s);
        break;
        case 4:
          printf("Enter String to be Checked\n");
          scanf("%s",t);
          bp(t,s1);
        break;
       default:
          printf("Entered Wrong Choice number\n");
          exit(1);
      }
    }
}


