#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct student
{
 char name[20];
 int rollno;
 float cgpa;
 struct student *next;
}stud;
 typedef stud *ptrtemp;
typedef ptrtemp list;
typedef ptrtemp position;
//char tempname[20];
//char *elementname=(char*)malloc(sizeof(char)*20);
typedef char elementname;
void Insert(stud,position,list);
void Delete(elementname[],list);
position Find(elementname[],list);
position Findprev(elementname[],list);
void Printlist(list);
int Islast(position,list);
position Initialize();
typedef struct pos
{
 int data;
  struct pos *next;
}pos1;
  typedef pos1 *ptr;
  typedef ptr poslist;
  typedef ptr pos2;
  typedef int elementtype;
  void insert(elementtype,pos2,poslist);
  void deletee(elementtype,poslist);
  pos2 initialize();
  pos2 find(elementtype,poslist);
  void printpos(poslist,list);
  void printlist(poslist);
  pos2 findprev(elementtype,poslist);

