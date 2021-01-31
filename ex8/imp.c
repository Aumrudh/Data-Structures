#include"tree.h"
void left(rbt x)
{
  rbt y;
  y=x->right;
  x->right=y->left;
  if(y->left!=NULL)
   {
    y->left->parent=x;
   }
  y->parent=x->parent;
  if(x->parent==NULL)
   {
     root=y;
   }
  else if((x->parent->left!=NULL)&&(x->data==x->parent->left->data))
    {
       x->parent->left=y;
    }
  else
    {
      x->parent->right=y;
      y->left=x;
      x->parent=y;
      return;
    }
}
void right(rbt x) 
{
  rbt y;
  y=x->left;
  x->left=y->right;
  if(y->right!=NULL)
   {
    y->right->parent=x;
   }
  y->parent=x->parent;
  if(x->parent==NULL)
   {
     root=y;
   }
  else if((x->parent->left!=NULL)&&(x->data==x->parent->left->data))
    {
       x->parent->left=y;
    }
  else
    {
      x->parent->right=y;
      y->right=x;
      x->parent=y;
      return;
    }
}
/*void coloring(rbt z)
{
  rbt y=NULL;
  while((z->parent!=NULL)&&(z->parent->color='r'))
   {
     if((z->parent->parent->left!=NULL)&&(z->parent->data==z->parent->parent->left->data))
      {
        if(z->parent->parent->right!=NULL)
         y=z->parent->parent->right;
         if((y!=NULL)&&(y->color=='r'))
          {
              z->parent->color='b';
              y->color='b';
              z->parent->parent->color='r';
              if(z->parent->parent!=NULL) 
                z=z->parent->parent;
           }
         else
          {
            if((z->parent->right!=NULL)&&(z->data==z->parent->right->data))
              {
                z=z->parent;
                left(z);
              }
            z->parent->color='b';
            z->parent->parent->color='r';
            right(z->parent->parent);
         }
    }
    else
     {
       if(z->parent->parent->left!=NULL)
           y=z->parent->parent->left;
       if((y!=NULL)&&(y->color=='r'))
         {
           z->parent->color='b';
           y->color='b';
           z->parent->parent->color='r';
           if(z->parent->parent!=NULL)
            z=z->parent->parent;
         }
       else
         {
          if((z->parent->left!=NULL)&&(z->data==z->parent->left->data))
            {
             z=z->parent;
             right(z);
            }
          z->parent->color='b';
          z->parent->parent->color='r';
          left(z->parent->parent);
        }
     }
   }
  root->color='b';
} */
void insert(int i)
{
    rbt x,y;
    rbt z = (rbt)malloc(sizeof(struct node));
    z->data = i;
    z->left = NULL;
    z->right = NULL;
    z->color = 'r';
    x=root;
    if(search(i)==1)
      {
	printf("\nEntered element is already present in the tree\n");
	return;
      }
    if(root==NULL)
     {
	root = z;
	root->color = 'b';
	return;
     }
    while ( x != NULL)
     {
	y = x;
	if ( z->data < x->data)
	{
	 x = x->left;
	}
	else x = x->right;
    }
    z->parent = y;
    if ( y == NULL)
     {
	root = z;
     }
    else if( z->data < y->data )
     {
	y->left = z;
     }
    else
     {
	y->right = z;
	coloring(z);
	return;
     }
}
void inorder(rbt root)
{
    rbt temp = root;
    if(temp != NULL)
     {
       inorder(temp->left);
       printf(" %d--'%c'",temp->data,temp->color);
       inorder(temp->right);
     }
    return;
}
void postorder(rbt root)
{
    rbt temp = root;
    if(temp != NULL)
    {
      postorder(temp->left);
      postorder(temp->right);
      printf(" %d--'%c' ",temp->data,temp->color);
    }
    return;
}
void preorder(rbt root)
{
    rbt temp = root;
    if (temp != NULL)
     {
       printf(" %d--'%c' ",temp->data,temp->color);
       preorder(temp->left);
       preorder(temp->right);
     }
    return;
}
int search(int v)
{
    rbt temp = root;
    int diff;
    while (temp != NULL)
    {
	diff = v - temp->data;
	if (diff > 0)
	{
	  temp = temp->right;
	}
	else if (diff < 0)
	{
	  temp = temp->left;
	}
	else
	{
	  return 1;
	}
    }
    return 0;
}
void coloring(rbt z)
{
rbt y=NULL;
while ((z->parent != NULL) && (z->parent->color == 'r'))
{
if ( (z->parent->parent->left != NULL) && (z->parent->data == z->parent->parent->left->data))
{
if(z->parent->parent->right!=NULL)
y = z->parent->parent->right;
if ((y!=NULL) && (y->color == 'r'))
{
z->parent->color = 'b';
y->color = 'b';
z->parent->parent->color = 'r';
if(z->parent->parent!=NULL)
z = z->parent->parent;
}
else
{
if ((z->parent->right != NULL) && (z->data == z->parent->right->data))
{
z = z->parent;
left(z);
}
z->parent->color = 'b';
z->parent->parent->color = 'r';
right(z->parent->parent);
}
}
else
{
if(z->parent->parent->left!=NULL)
y = z->parent->parent->left;
if ((y!=NULL) && (y->color == 'r'))
{
z->parent->color = 'b';
y->color = 'b';
z->parent->parent->color = 'r';
if(z->parent->parent!=NULL)
z = z->parent->parent;
}
else
{
if ((z->parent->left != NULL) && (z->data == z->parent->left->data))
{
z = z->parent;
right(z);
}
z->parent->color = 'b';
z->parent->parent->color = 'r';
left(z->parent->parent);
}
}
}
root->color = 'b';
}

