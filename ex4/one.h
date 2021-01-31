#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct queuenode
{
int size;
int front;
int rear;
int capacity;
int *arr;
int *pos;
}q;
typedef struct queuenode *queue;
queue createqueue(queue );
queue createqueue1(queue );
void enqueue(int ,queue );
void enqueue1(int ,queue ,int );
int dequeue(queue );
static int succ(int,queue );
int isempty(queue );
int isfull(queue );
int dequeue1(queue );
