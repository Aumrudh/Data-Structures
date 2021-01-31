#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct listnode
{
  int age;
  char name[20];
  struct listnode *next;
}node;
typedef node *ptrtonode;
typedef ptrtonode list;
typedef ptrtonode position;
list initialize();
void insert(int,char [],position,list);
void del(char [],list);
void display(list);
position find(char [],list);
position findprev(char [],list);
int count(list);
void sort(list);

