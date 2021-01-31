#include"zoo.h"
void insert(zoo_animal a[],int m)
{
    int pos,i;
    zoo_animal temp;
    printf("Enter the location where you wish to insert \n");
    scanf("%d",&pos);
    //getting new details to be inserted
    printf("Enter animal name\n");
    scanf("%s",temp.animal_name);
    printf("Enter animal age\n");
    scanf("%d",&temp.animal_age);
    printf("Enter animal BreakFast Time\n");
    scanf("%s",temp.animal_btime);
    printf("Enter animal Dinner Time\n");
    scanf("%s",temp.animal_dtime);
    //moving and making a vacant positon 
    for(i=m-1;i>=pos-1;i--)
      {
        a[i+1]=a[i];
      }
    //insertion of new details
    for(i=0;i<m;i++)
    a[pos-1]=temp;
      printf("Name\tAge\tBreakfast_Time\tDinner_time\n");
    for(i=0;i<m+1;i++)
    {
      printf("%s\t",a[i].animal_name);
      printf("%d\t",a[i].animal_age);
      printf("%s\t",a[i].animal_btime);
      printf("%s\n",a[i].animal_dtime);
    }

}
void delte(zoo_animal a[],int m)
{
    int found,pos,i;
    char name[20];
    printf("Enter the name of the animal to be deleted\n");
    scanf("%s",name);
    for(i=0;i<m;i++)
      {
        if(strcmp(name,a[i].animal_name)==0)
         {
           found=1;
           pos=i;
           break;
         }
      }
    if(found==1)
     {
      for(i=pos;i<=m-1;i++)
        {
          a[i]=a[i+1];
        }
     }
      printf("Name\tAge\tBreakfast_Time\tDinner_time\n");
    for(i=0;i<m-1;i++)
    {
      printf("%s\t",a[i].animal_name);
      printf("%d\t",a[i].animal_age);
      printf("%s\t",a[i].animal_btime);
      printf("%s\n",a[i].animal_dtime);
    }

}
void search(zoo_animal a[],int m)
{
    char key[20];
    int found,pos=0,ch,i;
    printf("Enter the search animal name\n");
    scanf("%s",key);
    for(i=0;i<m;i++)
    {
     if(strcmp(key,a[i].animal_name)==0)
         {
           found=1;
           pos=i+1;
           printf("The element is found at the position %d\n",pos);
         }
    }
   printf("Do u want to display search details\n1-Yes\n2-No\n");
   scanf("%d",&ch);
   if(ch==1)
    {
      printf("Name\tAge\tBreakfast_Time\tDinner_time\n");
      for(i=0;i<pos-1;i++)
      {
      printf("%s\t%d\t%s\t%s\n",a[pos-1].animal_name,a[pos-1].animal_age,a[pos-1].animal_btime,a[pos-1].animal_dtime);
      }
    }
}
void display(zoo_animal a[],int m)
{
    int i;
    printf("Name\tAge\tBreakfast_Time\tDinner_time\n");
    for(i=0;i<m;i++)
    {
      printf("%s\t",a[i].animal_name);
      printf("%d\t",a[i].animal_age);
      printf("%s\t",a[i].animal_btime);
      printf("%s\n",a[i].animal_dtime);
    }
}
void modify(zoo_animal a[],int m)
{
    zoo_animal temp;
    int i,pos=0;
    printf("Enter the new details to be modified\n");
    //getting new details to be inserted
    printf("Enter animal name\n");
    scanf("%s",temp.animal_name);
    printf("Enter animal age\n");
    scanf("%d",&temp.animal_age);
    printf("Enter animal BreakFast Time\n");
    scanf("%s",temp.animal_btime);
    printf("Enter animal Dinner Time\n");
    scanf("%s",temp.animal_dtime);
    printf("Enter the location where you wish to modify \n");
    scanf("%d",&pos);
    for(i=0;i<m;i++)
     {
       a[pos-1]=temp;
     }
}
void count(zoo_animal a[],int n)
{
    int i,key,count=0;
    printf("Enter the age to be counted\n");
    scanf("%d",&key);
    for(i=0;i<n;i++)
     {
      if(key==a[i].animal_age)
       {
         count++;
       }
     }
    printf("The number of animal with age %d is %d\n",key,count);
}


     
    

