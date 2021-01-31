#include<stdio.h>
#include<stdlib.h>
typedef struct stack_node
{
   char data;
   struct stack_node *next;
}node;
typedef node *stack;
void push(char,stack);
int pop(stack);
int ISEmpty(stack);
void display(stack);
void bp(char[],stack);
stack initialize();
int top(stack);
