#include"zoo.h"
main()
{
     zoo_animal animal[10];
     int n,i,ch;
     printf("Enter the Number of animals\n");
     scanf("%d",&n);
     for(i=0;i<n;i++)
       {
         printf("Enter the animal %d Name\n",i+1);
         scanf("%s",animal[i].animal_name);
         printf("Enter the animal %d Age\n",i+1);
         scanf("%d",&animal[i].animal_age);
         printf("Enter the animal %d Breakfast_Time\n",i+1);
         scanf("%s",animal[i].animal_btime);
         printf("Enter the animal %d Dinner_Time\n",i+1);
         scanf("%s",animal[i].animal_dtime);
       }
     while(1)
     {
     printf("Enter the choice\n1-Insert\n2-Delete");
     printf("\n3-Modify\n4-Search\n5-Display\n6-Count Age\n");
     scanf("%d",&ch);
     switch(ch)
      {
        case 1:
                insert(animal,n);
                break;
        case 2:
                delte(animal,n);
                break;
        case 3:
                modify(animal,n);
                break;
        case 4: 
                search(animal,n);
                break;
        case 5:
                display(animal,n);
                break;
        case 6:
                count(animal,n);
                break;
        default:
                 printf("Invalid Choice\n");
                 exit(1);
     }
    }
}


