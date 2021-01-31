//AVL TREE
//PROGRAMMED BY AUMRUDH LAL KUMAR TJ


#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
 int data;
 int height;
 struct node *left;
 struct node *right;
}treenode;
typedef treenode *treeptr;
treeptr insert(int,treeptr);
treeptr find(int,treeptr);
treeptr findmin(treeptr);
treeptr findmax(treeptr);
treeptr Delete(int,treeptr);
void preordertravresal(treeptr);
void inordertravresal(treeptr);
void postordertravresal(treeptr);
treeptr count(treeptr);
int getbalance(treeptr);
int max(int,int);
int Height(treeptr);
treeptr right(treeptr);
treeptr left(treeptr);
