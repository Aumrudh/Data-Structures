#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct student
{
    int rno; //Roll Number
    char name[20];
}stud;
void bubblesortno(stud *,int);
void bubblesortname(stud *,int);
void quicksortno(stud *,int,int);
void quicksortname(stud *,int,int);
void heapsortno(stud *,int);
void heapsortname(stud *,int);
void insertionsortno(stud *,int);
void insertionsortname(stud *,int);
void mergesortno(stud *,int,int);
void mergesortname(stud *,int,int);
void display(stud *,int);
void heapifyname(stud*, int , int );
void heapifyrno(stud*, int , int );
void mergename(stud*, int, int , int );
void mergerno(stud*, int , int , int );
void swap(stud,stud);
int partitionname(stud*,int,int);
int partitionrno(stud*,int,int);


