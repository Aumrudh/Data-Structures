#include"hf.h"
splay* create()
{
        splay *temp;
        temp = (splay*)malloc(sizeof(splay));
        if(temp == NULL)
                return NULL;
        temp->left = temp->right = NULL;
        return temp;
}
void inordertravresal(splay *t)
{
  if(t!=NULL)
  {
    inordertravresal(t->left);
    printf("%d\t",t->element);
    inordertravresal(t->right);
 }
//  if(t->parent == NULL)
  //     printf("%d is the root\n",t->element);
}
void preordertravresal(splay *t)
{
  if(t!=NULL)
  {
    printf("%d\t",t->element);
    preordertravresal(t->left);
    preordertravresal(t->right);
  }
 // if(t->parent == NULL)
  //  printf("%d is the root\n",t->element);
}
void postordertravresal(splay *t)
{
  if(t!=NULL)
  {
     postordertravresal(t->left);
     postordertravresal(t->right);
     printf("%d\t",t->element);
   }
 // if(t->parent == NULL)
  //    printf("%d is the root\n",t->element); 
}
splay* insert(int x,splay *tree,splay *parent)
{
        if(tree == NULL)
        {
                splay *temp;
                if((temp = create()) == NULL)
                        return tree;
                temp->element = x;
		temp->parent = parent;
		t = temp;
                return temp;
        }
        else
        {
                if(x > tree->element)
                        tree->right = insert(x,tree->right,tree);
                else if(x < tree->element)
                        tree->left = insert(x,tree->left,tree);
                return tree;
        }
}
splay* delete(splay *tree)
{
	splay *s,*l;
	if(tree->right == NULL)
	{
		l = tree->left;
		free(tree);
		return l;
	}
	s = minValueNode(tree->right);
	s->left = tree->left;
	s->right = tree->right;
	free(tree);
	return s;
}
splay* splays(int x,splay *root)
{
	while(x != root->element)
	{
		if(t->parent == root)
			if(t == root->left)
				root = zig(root);
			else
				root = zag(root);
		else
		{
			splay *p = t->parent;
			splay *gp = p->parent;
			if(p == gp->left)
				if(t == p->left)
				{
					if(gp == root)
					{
						root = zig(gp);
						root = zig(p);	
					}
					else if(x < gp->parent->element)
					{
						gp->parent->left = zig(gp);
						gp->parent->left = zig(p);
					}
					else if(x > gp->parent->element)
                                        {
                                                gp->parent->right = zig(gp);
                                                gp->parent->right = zig(p);
                                        }
				}
				else
				{
					gp->left = zag(p);
					if(gp == root)
						root = zig(gp);
					else if(x < gp->parent->element)
						gp->parent->left = zig(gp);
					else if(x > gp->parent->element)
                                                gp->parent->right = zig(gp);
				}
			else
				if(t == p->right)
				{
					if(gp == root)
					{
                                                root = zag(gp);
                                                root = zag(p);  
                                        }
					else if(x < gp->parent->element)
                                        {
                                                gp->parent->left = zag(gp);
                                                gp->parent->left = zag(p);
                                        }
					else if(x > gp->parent->element)
					{
						gp->parent->right = zag(gp);
						gp->parent->right = zag(p);
					}
				}
				else
				{
					gp->right = zig(p);
					if(gp == root)
						root = zag(gp);
					else if(x < gp->parent->element)
                                                gp->parent->left = zag(gp);
					else if(x > gp->parent->element)
						gp->parent->right = zag(gp);
				}
		}
		update(root,NULL);
	}
	return root;
}
splay* update(splay *tree,splay* parent)
{
	if(tree != NULL)
	{
		tree->parent = parent;
		update(tree->left,tree);
		tree->parent = parent;
		update(tree->right,tree);
	}
}
splay* zig(splay *k2)
{
        splay *k1 = k2->left;
        k2->left = k1->right;
        k1->right = k2;
        return k1;
}
splay* zag(splay *k2)
{
        splay *k1 = k2->right;
        k2->right = k1->left;
        k1->left = k2;
        return k1;
}
splay* find(int x,splay *tree)
{
	splay *t = tree;
        while(t != NULL)
        {
                if(x == t->element)
                        return t;
                else if(x < t->element)
                        t = t->left;
                else if(x > t->element)
                        t = t->right;
        }
        return NULL;
}
splay* minValueNode(splay* node)
{
	splay *root = node->parent;
	if(node->left == NULL)
	{
		root->right = node->right;
		update(root,NULL);
		return node;
	}
	while (node->left != NULL)
        	node = node->left;
	node->parent->left = node->right;
	return node;
}
/*void display(splay *tree)
{
        if(tree != NULL)
        {
                display(tree->left);
		if(tree->parent == NULL)
			printf("%d is the root\n",tree->element);
		else
                	printf("%d is the parent of %d\n",tree->parent->element,tree->element);
                display(tree->right);
        }
}*/

