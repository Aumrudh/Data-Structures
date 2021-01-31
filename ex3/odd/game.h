#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<malloc.h>
typedef struct stack_node
{
 int data;
 struct stack_node *next;
}node;
typedef node *ptrtonode;
typedef ptrtonode stack;
typedef ptrtonode position;
int isempty(stack);
stack intialise();
void push(int,stack);
int pop(stack);
void display(stack);

