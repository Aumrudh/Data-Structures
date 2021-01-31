#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct PERSON
{
     char name[10];
     int age;
     int salary;
     struct PERSON *next;
}person;
typedef person *ptrtonode;
typedef ptrtonode list;
typedef ptrtonode position;
int ISEmpty(list); //checking wheather list is empty
position find(char[],list);  //finding a particular person in list
position findprev(char[],list);  //finding previous node of a given person
void insert(person,position,list);  //Inserting a person in a list
void Delete(char[],list);  //Deleting a person from a list
void display(list);  //Print the list
position initialize();  //Initialize with header node
void sort(list);
int ISLast(position,list);
int count(list);
