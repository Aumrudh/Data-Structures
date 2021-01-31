#include<stdio.h>
#include<malloc.h>
#include<string.h>
#include<stdlib.h>
typedef struct node
{
 int data;
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
