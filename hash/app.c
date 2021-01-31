#include"hash.h"
int main()
{
  int max,choice;char word[50], meaning[50]; int n, c=1;
  printf("\nEnter array size : ");
  scanf("%d",&max);
  array = (struct arrayitem*) malloc(max * sizeof(struct arrayitem*));
  init_array(max);
do
{
    printf(" \n1.Insert\n2.Display\n");
    printf("\nEnter your choice : ");
    scanf("%d", &choice);
    switch(choice)
    {
     case 1:
             printf("\nEnter the  word : ");
             scanf("%s",word);
	     printf("\nEnter the meaning : ");
             scanf("%s",meaning);
             insert(word, meaning,max);
            break;
	    break;
     case 2:
            display(max);
            break;
    default:
	   printf("Wrong Choice\n");
           exit(0);
    }
  }while(c == 1);
}
