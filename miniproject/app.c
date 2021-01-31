#include"sort.h"
int main()
{
    int i,n,count=1,qc,ch,choice,key,cs;
    stud *s;
    printf("\n---------------------------------------------------------------------\n");
    printf("\nEnter number of students : ");
    scanf("%d",&n);
    printf("\n---------------------------------------------------------------------\n");
    s=(stud*)malloc(n*sizeof(stud));
    for(i=0;i<n;i++)
      {
         printf("\nEnter the roll no :");
         scanf("%d",&s[i].rno);
         printf("\nEnter the name of student : ");
         scanf("%s",s[i].name);
       }   
while(1)
     {
        printf("\n---------------------------------------------------------------------\n");
        printf("\n\t\t\t1-Sort\n\t\t\t2-Display\n\t\t\t3-Exit\n");
        printf("\n---------------------------------------------------------------------\n");
        printf("Enter your choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
          case 1:
                  printf("\nSort Functions\n");
                //  printf("\n---------------------------------------------------------------------\n");
                  printf("\n\t\t\t1-Bubble sort\n\t\t\t2-Insertion Sort\n\t\t\t3-Quick Sort\n\t\t\t4-Heap sort\n\t\t\t5-Merge Sort\n");
                //  printf("\n---------------------------------------------------------------------\n");
                  printf("Enter your choice : ");
                  scanf("%d",&choice);
                   if(choice==1)
                    {
                              printf("Sorting done BUBBLE SORT \n1-Rollnumber\n2-Name\n");
                              scanf("%d",&cs);
                              if(cs==1)
                              {
                                 bubblesortno(s,n);
                              }
                              if(cs==2)
                              {
                                bubblesortname(s,n);
                              }
                              /*else
                               {
                                 printf("Wrong Choice !! \n");
                               }*/
                    }
                     if(choice==2)
                        {
                              printf("Sorting on INSERTION SORT \n1-Rollnumber\n2-Name\n");
                              scanf("%d",&cs);
                              if(cs==1)
                              {
                                 insertionsortno(s,n);
                              }
                              if(cs==2)
                              {
                                insertionsortname(s,n);
                              }
                             /* else
                              {
                                printf("Wrong Choice !! \n");
                              } */
                       }
                   if(choice==3)
                     {
                              printf("Sorting done QUICKSORT  \n1-Rollnumber\n2-Name\n");
                              scanf("%d",&qc);
                              if(qc==1)
                              {
                                quicksortno(s,0,n-1);
                              }
                              if(qc==2)
                              {
                                quicksortname(s,0,n-1);
                              }
                            /* else
                              {
                                 printf("Wrong Choice !! \n");
                               }*/
                    }
                     if(choice==4)
                     {
                              printf("Sortiog on HEAPSORT\n1-Rollnumber\n2-Name\n");
                              scanf("%d",&cs);
                              if(cs==1)
                              {
                                 heapsortno(s,n);
                              }
                               if(cs==2)
                              {
                                heapsortname(s,n);
                              }
                             /* else
                              {
                                 printf("Wrong Choice ! \n");
                               }*/
                     }
                     if(choice==5)
                        {
                              printf("Sortiog on MERGE SORT\n1-Rollnumber\n2-Name\n");
                              scanf("%d",&cs);
                              if(cs==1)
                              {
                                 mergesortno(s,0,n-1);
                              }
                               if(cs==2)
                              {
                                mergesortname(s,0,n-1);
                              }
                             /* else
                              {
                                 printf("Wrong Choice ! \n");
                               }*/
                       }
                      break;

          case 2:
                  display(s,n);
                  break;
          case 3:
                  free(s);
                  exit(0);
          default:
                  printf("Wrong Choice !! Sorry ... \n");

       }
     //  printf("Do you want to continue ? 1-Yes 2-No");
     //  printf("\nEnter your Choice : ");
     //  scanf("%d",&key);
      // count=key;
     }
   return 0;
}


