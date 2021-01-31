#include<stdio.h>
#include<stdlib.h>
struct node
{
int key;
char color;
struct node *left;
struct node *right;
struct node *parent;
};
typedef struct node* rbt;
rbt root;
void leftrotate(rbt);
void rightrotate(rbt);
void colorinsert(rbt);
void insert(int);
void inorder(rbt);
void postorder(rbt);
void traversal(rbt);
int search(int);

