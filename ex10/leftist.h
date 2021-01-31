#include<stdio.h>
#include<stdlib.h>
struct node
{
   int data;
   int dist;
   struct node *left;
   struct node *right;
   struct node *parent;
}*root,*temp,*root3,*root4;
void display(struct node *);
int distance(struct node *);
struct node *merge(struct node *,struct node *);
struct node *insert(struct node*);
struct node *delet(struct node*);
void mergee();

