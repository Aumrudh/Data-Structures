#include<stdio.h>
#include<stdlib.h>
int main()
{
        int A[4][4],i,j,k,n;
        printf("Enter the total no of vertices : ");
        scanf("%d",&n);
        printf("\nEnter the path of distance of vertices in matrix order : \n\n");
        for(i=0; i<n; i++)
        {
                for(j=0; j<n; j++)
                {
                        scanf("%d",&A[i][j]);
                }
        }
        for(i=0; i<n; i++)
  {
    for(j=0; j<n; j++)
    {
      for(k=0; k<n; k++)
            {
                 if(A[i][j] > A[i][k]+A[k][j])
                                                A[i][j] = A[i][k]+A[k][j];
          }

    }
  }
        printf("\n\n\nFinal Answer is : \n\n");
  for(i=0; i<n; i++)
  {
    for(j=0; j<n; j++)
    {
      printf("%d\t",A[i][j]);
    }printf("\n");
  }
}

