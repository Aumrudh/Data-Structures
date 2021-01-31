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
  }
  t=temp;
}
  else if(t!=NULL)
  {
   if(x<t->data)
    t->left=insert(x,t->left);
   else if(x>t->data)
    t->right=insert(x,t->right);
  }
 return t;
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
/*treeptr findmin(treeptr t)
{
 if(t==NULL)
 return NULL;
 else if(t->left==NULL)
  return NULL;
 else
  return findmin(t->left);
}*/
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

treeptr count(treeptr t)
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
}
treeptr Delete(int x,treeptr t)
{
  treeptr temp;
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
   return t;
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

