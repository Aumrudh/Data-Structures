#include<stdio.h>
#include<stdlib.h>
typedef struct Node * List;
struct Node
{
        int element;
        struct Node * next;
};
void print(List);
List find(List,int);
List findbypos(List,int);
void insert(List,int,List);
void deletebyelement(List,int);
void insertafterx(List,int,int);
void replace(List,int,int);
int occurence(List,int);
void print(List header)
{
        List t;
        t=header->next;
        while(t!=NULL)
        {
                printf("%d\t",t->element);
                t=t->next;
        }
}
List find(List header,int x)
{
        List t;
        t=header->next;
        while(t!=NULL)
        {
                if(x==t->element)
                {
                        return(t);
                }
                else
                {
                        t=t->next;
                }
        }
}
List findbypos(List header,int pos)
{
        List t;
        int c=1;
        t=header->next;
        do
        {
                t=t->next;
                c++;
        }while(c<pos);
        return(t);
}
void insert(List header,int new,List loc)
{
        List t;
        t=(List)malloc(1*sizeof(struct Node));
        t->next=loc->next;
        loc->next=t;
        t->element=new;
        print(header);
}
void insertafterx(List header,int x,int new)
{
        List t;
        t=find(header,x);
        insert(header,new,t);
}
List findprev(List header,int x)
{
        List t,prev;
        t=header->next;
        prev=header;
        while(t!=NULL)
        {
                if(t->element==x)
                {
                        return(prev);
                }
                prev=t;
                t=t->next;
        }
}
void deletebyelement(List header,int x)
{
        List p,t;
        p=findprev(header,x);
        t=p->next;
        p->next=t->next;
        free(t);
        print(header);
}
void replace(List header,int x,int y)
{
        List m;
        m=find(header,x);
        m->element=y;
}
 main()
{
        List header,location,f,p,fp,t,temp;
        int x,pos,new,y,n=1,ch,i,z,nw;
        header=(List)malloc(1*sizeof(struct Node));
        header->next=NULL;
        temp=header;
        printf("Enter the no of elements:");
        scanf("%d",&z);
        printf("\nEnter the elements:");
        for(i=0;i<z;i++)
        {
                scanf("%d",&nw);
                t=(List)malloc(1*sizeof(struct Node));
                temp->next=t;
                t->element=nw;
                t->next=NULL;
                temp=t;
        }
        while(n!=0)
        {
                printf("\t\t\t MENU");
                printf("\n1.To Print the list");
                printf("\n2.To Find the Element");
                printf("\n3.To Find the Element by location");
                printf("\n4.To Insert the Element");
                printf("\n5.To Insert an Element after X");
                printf("\n6.To Delete the Element");
                printf("\n7.To Replace X by Y");
                printf("\n Enter the Choice:");
                scanf("%d",&ch);
 switch(ch)
                {
                        case 1:
                                print(header);
                                break;
                        case 2:
                                printf("\nEnter the element:");
                                scanf("%d",&x);
                                f=find(header,x);
                                printf("%d",f->element);
                                break;
                        case 3:
                                printf("\nEnter the position:");
                                scanf("%d",&pos);
                                p=findbypos(header,pos);
                                printf("The found element is %d",p->element);
                                break;
                        case 4:
                                printf("\nEnter the new element:");
                                scanf("%d",&new);
                                printf("\nEnter the position:");
                                scanf("%d",&pos);
                                location=findbypos(header,pos);
                                insert(header,new,location);
                                break;
                        case 5:
                                printf("\nEnter the element:");
                                scanf("%d",&x);
                                printf("\nEnter the new element:");
                                scanf("%d",&new);
                                insertafterx(header,x,new);
                                break;
                        case 6:
                                printf("\nEnter the element to be deleted:");
                                scanf("%d",&x);
                                deletebyelement(header,x);
                                break;
                        case 7:
                                printf("\nEnter the element x:");
                                scanf("%d",&x);
                                printf("\nEnter the element y:");
                                scanf("%d",&y);
                                replace(header,x,y);
                                break;
                        default:
                                printf("\nEnter the valid choice");
                }
                printf("\nPress 1 if u want to continue:");
                scanf("%d",&n);
        }
        printf("\nBye!!!\n");
}
       print(header);
}
