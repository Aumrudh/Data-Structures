#include"tree.h"
treeptr insert(int x,treeptr t)
{
 treeptr temp;
 if(t==NULL)
 {
  temp=(treenode*)malloc(sizeof(treenode));
  if(temp==NULL)
  {
   printf("No memory allocation!");
   exit(-1);
  }
  else
  {
    temp->data=x;
    temp->left=NULL;
    temp->right=NULL;
    temp->height=0;
  }
  t=temp;
}
  else if(t!=NULL)
  {
   if(x<t->data)
   { 
    t->left=insert(x,t->left);
    if((Height(t->left)-Height(t->right))==2)
     {
        if(x<t->left->data)
           t=right(t);
        else
           t=left(t);
     }
   }  
   else if(x>t->data)
    {  
    t->right=insert(x,t->right);
    if((Height(t->left)-Height(t->right))==-2)
     {
        if(x>t->right->data)
           t=left(t);
        else
           t=right(t);
     }
     }
  }
   else
    {
     printf("\n");
    }
  t->height=max(Height(t->left),Height(t->right));
 return t;
}
int max(int x,int y)
{
   if(x>y)
     return x;
   else
     return y;
}
int Height(treeptr t)
{
    if(t==NULL)
      return 0;
    else
      return t->height;
}
treeptr find(int x,treeptr t)
{
 if(t==NULL)
  return NULL;
 if(x<t->data)
  return find(x,t->left);
 else if(x>t->data)
  return find(x,t->right);
 else
   return t;
}
treeptr findmax(treeptr t)
{
  if(t!=NULL)
   while(t->right!=NULL)
     t=t->right;
 return t;
}
treeptr findmin(treeptr t)
{
  if(t!=NULL)
   while(t->left!=NULL)
     t=t->left;
 return t;
}

/*treeptr count(treeptr t)
{
   if(t==NULL) 
   {
    return 0;
   }
   else
   {
    int lheight=count(t->left);
    int rheight=count(t->right);
    int tot=lheight+rheight;
    return (tot+1);
   }
}*/
treeptr Delete(int x,treeptr t)
{
  treeptr temp;
  int bal;
  if(t==NULL)
    printf("Empty tree");
  else if(x<t->data)
    t->left=Delete(x,t->left);
  else if(x>t->data)
    t->right=Delete(x,t->right);
  else if(t->left && t->right)
  {
    temp=findmax(t->left);
    t->data=temp->data;
    t->left=Delete(t->data,t->left);
   
  }
  else
  {
    temp=t;
    if(t->left==NULL)
     t=t->right;
    else if(t->right==NULL)
      t=t->left;
    free(temp);
   }
  if(t==NULL)
   return t;
  t->height=1+max(Height(t->left),Height(t->right));
  bal=getbalance(t);
  if(bal>1&&getbalance(t->left)>=0)
    {
      return left(t);
    }
  if(bal>1&&getbalance(t->left)<0)
    {
      t->left=right(t->left);
      return left(t);
    }
   if(bal<-1&&getbalance(t->right)<=0)
    {
      return right(t);
    }
    if(bal<-1&&getbalance(t->right)<0)
    {
      t->right=left(t->right);
      return right(t);
    }
   return t;
}
int getbalance(treeptr t)
{
  if(t==NULL)
    return 0;
  else
    return (Height(t->left)-Height(t->right));
}
treeptr right(treeptr k1)
{
  treeptr k2;
  k2=k1->left;
  k1->left=k2->right;
  k2->right=k1;
  k1->height=max(Height(k1->left),Height(k1>right))+1;
  k2->height=max(Height(k2->left),Height(k2>right))+1;
  return k2;
}
treeptr left(treeptr k1)
{
  treeptr k2;
  k2=k1->right;
  k1->right=k2->left;
  k2->left=k1;
  k1->height=max(Height(k1->left),Height(k1>right))+1;
  k2->height=max(Height(k2->left),Height(k2>right))+1;
  return k2;
}


void inordertravresal(treeptr t)
{
  if(t!=NULL)
  {
inordertravresal(t->left);
    printf("%d\t",t->data);
    inordertravresal(t->right);
 }  
}
void preordertravresal(treeptr t)
{
  if(t!=NULL)
  {
    printf("%d\t",t->data);
    preordertravresal(t->left);
    preordertravresal(t->right);

  }
}
void postordertravresal(treeptr t)
{
  if(t!=NULL)
  {
     postordertravresal(t->left);
     postordertravresal(t->right);
     printf("%d\t",t->data);
   }
}
