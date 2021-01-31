#include"sort.h"

void bubblesortno(stud *s, int n)
{
   int i,j;
   stud temp;
    for (i = 0; i < n-1; i++)
     {
       for (j = 0; j < n-i-1; j++)
        {
           if (s[j].rno > s[j+1].rno)
            {
              temp=s[j];
              s[j]=s[j+1];
              s[j+1]=temp;
            }
        }
    }
}
void bubblesortname(stud *s, int n)
{
     int i,j;
     stud temp;
     for (i = 0; i < n-1; i++)
     {
       for (j = 0; j < n-i-1; j++)
        {
           if(strcmp(s[j].name,s[j+1].name))
            {
              temp=s[j];
              s[j]=s[j+1];
              s[j+1]=temp;
            }
        }
     }
}

void insertionsortno(stud *s,int n)
{
   int i,j;
   stud temp;
   for(i=0;i<n;i++)
    {
        temp = s[i];
        for(j=(i-1); j>=0 && temp.rno<s[j].rno ; j--)
        {
            s[j+1] = s[j];
        }
        s[j+1] = temp;
    }
}
void insertionsortname(stud *s,int n)
{
    int i,j;
    stud temp;
    for(i=0;i<n;i++)
    {
        temp = s[i];
        for(j=(i-1); j>=0 && strcmp(temp.name,s[j].name)<0 ; j--)
        {
            s[j+1] = s[j];
        }
        s[j+1] = temp;
    }
}

void quicksortno(stud *s,int low,int high)
{
   {
    if (low < high)
    {
        // pi is partitioning index, arr[pi] is now
         //  at right place
      int pi = partitionrno(s, low, high);

        quicksortno(s, low, pi - 1);  // Before pi

        quicksortno(s, pi + 1, high); // After pi
    }
  }
}
void quicksortname(stud *s,int low,int high)
{
    if (low < high)
    {
        // pi is partitioning index, arr[pi] is now
          // at right place
        int pi = partitionname(s, low, high);

        quicksortname(s, low, pi - 1);  // Before pi

        quicksortname(s, pi + 1, high); // After pi
    }
}
int partitionrno(stud *s, int low, int high)
{
    int i,j;
    stud temp,pivot;
    // pivot (Element to be placed at right position)
    pivot = s[high];

    i = (low - 1);  // Index of smaller element

    for (j = low; j <= high- 1; j++)
    {
        // If current element is smaller than the pivot
        if (s[j].rno < pivot.rno)
        {
            i++;    // increment index of smaller element
             temp=s[i];
             s[i]=s[j];
             s[j]=temp;
        }
    }
    temp=s[i+1];
    s[i+1]=s[high];
    s[high]=temp;
    return (i + 1);
}
int partitionname(stud *s, int low, int high)
{
    stud pivot,temp;
    pivot = s[high];    // pivot
    int i,j;
    i = (low - 1);  // Index of smaller element

    for (j = low; j <= high- 1; j++)
    {
        // If current element is smaller than the pivot
        if (strcmp(s[j].name,pivot.name)<0)
        {
            i++;    // increment index of smaller element
            temp=s[i];
            s[i]=s[j];
            s[j]=temp;
        }
    }
     temp=s[i+1];
     s[i+1]=s[high];
     s[high]=temp;
    return (i + 1);
}
void mergesortno(stud *s, int l, int r)
{
   int cs,i,j;
   stud temp;
    if (l < r)
    {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l+(r-l)/2;

        // Sort first and second halves
        mergesortno(s, l, m);
        mergesortno(s, m+1, r);
        mergerno(s, l, m, r);
    }
}
void mergesortname(stud *s, int l, int r)
{
     if (l < r)
    {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l+(r-l)/2;

        // Sort first and second halves
        mergesortname(s, l, m);
        mergesortname(s, m+1, r);
        mergename(s, l, m, r);
    }
}
void mergerno(stud *s, int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;

    // create temp arrays
    stud L[n1], R[n2];

    // Copy data to temp arrays L[] and R[]
    for (i = 0; i < n1; i++)
        L[i] = s[l + i];
    for (j = 0; j < n2; j++)
        R[j] = s[m + 1+ j];

    // Merge the temp arrays back into arr[l..r]
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2)
    {
        if (L[i].rno < R[j].rno)
        {
            s[k] = L[i];
            i++;
        }
        else
        {
            s[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of L[], if there are any
    while (i < n1)
    {
        s[k] = L[i];
        i++;
        k++;
    }

    // Copy the remaining elements of R[], if there   are any
    while (j < n2)
    {
        s[k] = R[j];
        j++;
        k++;
    }
}
void mergename(stud *s, int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;

    // create temp arrays
    stud L[n1], R[n2];

    // Copy data to temp arrays L[] and R[]
    for (i = 0; i < n1; i++)
        L[i] = s[l + i];
    for (j = 0; j < n2; j++)
        R[j] = s[m + 1+ j];

    // Merge the temp arrays back into arr[l..r]
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2)
    {
        if (strcmp(L[i].name,R[j].name)<0)
        {
            s[k] = L[i];
            i++;
        }
        else
        {
            s[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of L[], if there  are any
    while (i < n1)
    {
        s[k] = L[i];
        i++;
        k++;                                                                                                                                                                 }
    // Copy the remaining elements of R[], if there  are any        
                                                                                                                                                                             while (j < n2)
    {
        s[k] = R[j];
        j++;
        k++;
    }
}
void heapsortno(stud *s, int n)
{
   int i;
   stud temp;
    // Build heap (rearrange array)
    for ( i = n / 2 - 1; i >= 0; i--)
        heapifyrno(s, n, i);

    // One by one extract an element from heap
    for ( i=n-1; i>=0; i--)
    {
        // Move current root to end
       temp=s[0];
       s[0]=s[i];
       s[i]=temp;
        // call max heapify on the reduced heap
        heapifyrno(s, i, 0);
    }
  }
void heapsortname(stud *s, int n)
  {
    int i;
    stud temp;
   for ( i = n / 2 - 1; i >= 0; i--)
        heapifyname(s, n, i);

    // One by one extract an element from heap
    for ( i=n-1; i>=0; i--)
    {
        // Move current root to end
          temp=s[0];                                                                                                                                                                                                                                    s[0]=s[i];                                                                                                                                                                                                                                                                                                                 s[i]=temp;
        // call max heapify on the reduced heap
        heapifyname(s, i, 0);
    }
  }
void heapifyrno(stud *s, int n, int i)
{
    int largest = i; // Initialize largest as root
    int l = 2*i + 1; // left = 2*i + 1
    int r = 2*i + 2; // right = 2*i + 2
    stud temp;
    // If left child is larger than root
    if (l < n && s[l].rno > s[largest].rno)
        largest = l;

    // If right child is larger than largest so far
    if (r < n && s[r].rno > s[largest].rno)
        largest = r;

    // If largest is not root
    if (largest != i)
    {
        temp=s[i];
        s[i]=s[largest];
        s[largest]=temp;
        // Recursively heapify the affected sub-tree
        heapifyrno(s, n, largest);
    }
}
void heapifyname(stud *s, int n, int i)
{
    int largest = i;
    int l = 2*i + 1; // left = 2*i + 1
    int r = 2*i + 2; // right = 2*i + 2
    stud temp;
    // If left child is larger than root
    if (l < n && strcmp(s[l].name,s[largest].name)>0)
        largest = l;

    // If right child is larger than largest so far
    if (r < n && strcmp(s[r].name,s[largest].name)>0)
        largest = r;

    // If largest is not root
    if (largest != i)
    {
         temp=s[i];
         s[i]=s[largest];
         s[largest]=temp;
        // Recursively heapify the affected sub-tree
        heapifyname(s, n, largest);
    }
}
void display(stud *s,int n)
{
  int i;
  printf("\n-------------------------------------------------------------------------\n");
  printf("\nRoll Number\t\tName\n");
  printf("\n-------------------------------------------------------------------------\n");
   for(i=0;i<n;i++)
    {
      printf("%d\t\t%s\n",s[i].rno,s[i].name);
    }
}


