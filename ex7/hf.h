#include<stdio.h>
#include<stdlib.h>
struct node
{
        int element;
        struct node *left;
        struct node *right;
	struct node *parent;
};
typedef struct node splay;
splay *t;
splay* create();
splay* insert(int,splay *,splay *);
splay* delete(splay *);
splay* minValueNode(splay *);
splay* splays(int,splay*);
splay* update(splay *,splay *);
splay* find(int,splay *);
splay* zig(splay *);
splay* zag(splay *);
void display(splay *);
void preordertravresal(splay *);
void inordertravresal(splay *);
void postordertravresal(splay *);

