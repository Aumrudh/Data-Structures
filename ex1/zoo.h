#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<malloc.h>
typedef struct zoo
{
    char animal_name[20];
    int animal_age;
    char animal_btime[10];
    char animal_dtime[10];
}zoo_animal;
void insert();
void delte();
void search();
void modify();
void count();
