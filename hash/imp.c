#include"hash.h"
int size=0;
int hashcode(unsigned int word,int max)
{
  return (word% max);
}
void insert(char word[], char meaning[],int max)
{
    float n = 0.0;
  int index = hashcode(word[0],max);
  struct node *list = (struct node*) array[index].head;

  struct node *item = (struct node*) malloc(sizeof(struct node));
  strcpy(item->word ,word);
  strcpy(item->meaning ,meaning);
  item->next = NULL;

  if (list == NULL)
 {
    array[index].head = item;
    array[index].tail = item;
    size++;

  }
  else
  {
    int find_index = find(list, word);
    if (find_index == -1)
 {
      array[index].tail->next = item;
      array[index].tail = item;
      size++;

    }else
 {
   struct node *element = get_element(list, find_index);
   strcpy(element->meaning,meaning);
 }

  }
  n = (1.0 * size) / max;
  if (n >= 0.75)
 {
    rehash(max);
  }

}

void rehash(int max)
{
  struct arrayitem *temp = array;
  int i = 0, n = max;
  int size = 0;
  max = 2 * max;
  array = (struct arrayitem*) malloc(max * sizeof(struct node));
  init_array(max);

  for (i = 0; i < n; i++)
  {
    struct node* list = (struct node*) temp[i].head;

    if (list == NULL)
                {
      continue;

    }
                else
                {
                                      while (list != NULL)
                            {
        insert(list->word, list->meaning,max);
        list = list->next;
      }

    }

  }
  temp = NULL;
   }

int find(struct node *list, char key[])
{
  int retval = 0;
  struct node *temp = list;
  while (temp != NULL)
        {
    if (strcmp(temp->word,key)==0)
                {
      return retval;
    }
      temp = temp->next;
    retval++;
  }
  return -1;

}
struct node* get_element(struct node *list, int find_index)
{
  int i = 0;
  struct node *temp = list;
  while (i != find_index)
        {
    temp = temp->next;
    i++;
  }
  return temp;
}
void remove_element(char word[],int max)
{
  int index = hashcode(word[0],max);
  struct node *list = (struct node*) array[index].head;
  if (list == NULL)
   {
    printf("\nWord not present\n");
          }
   else
       {
    int find_index = find(list, word);
    if (find_index == -1)
     {
      printf("This word does not exists\n");
     }
      else
      {
      struct node *temp = list;
      if (strcmp(temp->word, word)==0)
            {
          array[index].head = temp->next;
        return;
      }
      while (strcmp(temp->next->word,word)!=0)
                        {
        temp = temp->next;
      }
        if (array[index].tail == temp->next)
                        {
        temp->next = NULL;
        array[index].tail = temp;

      }
                        else
                        {
        temp->next = temp->next->next;
                        }
    }
  }
 }
void display(int max)
{
  int i = 0;
  for (i = 0; i < max; i++)
        {
    struct node *temp = array[i].head;
    if (temp == NULL)
                {
      printf("%d\n", i);
        }
                else
                {
      printf("%d %c\n", i,temp->word[0]);
      while (temp != NULL)
                            {
        printf("\nWord= %s  \nMeaning= %s\t", temp->word, temp->meaning);
        temp = temp->next;
      }
      printf("\n");

    }
  }
}
void init_array(int max)
{
  int i = 0;
  for (i = 0; i < max; i++)
        {
    array[i].head = NULL;
    array[i].tail = NULL;
  }

}
int size_of_array()
{
  return size;
}

