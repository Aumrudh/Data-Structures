#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
  char word[50];
  char meaning[50];
  struct node *next;
};
struct arrayitem
{

  struct node *head;
       struct node *tail;

};
struct arrayitem *array;
int hashcode(unsigned int word,int max);
struct node* get_element(struct node *list, int find_index);
void remove_element(char [],int);
void rehash(int);
void init_array(int);
void insert(char word[], char meaning[],int max);
int find(struct node *list, char key[]);
void display(int max);
int size_of_array();

