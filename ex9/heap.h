#include<stdio.h>
#include<stdlib.h>
struct node
{
   int *array;
   int size;
   int capacity;
};
typedef struct node *heap;
heap create(int);
heap insert(int,heap);
heap deletemin(heap);
int isempty(heap);
int isfull(heap);
void display(heap);
void search(int,heap);
