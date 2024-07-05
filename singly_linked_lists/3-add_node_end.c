#include "lists.h"
/**
 * add_node_end - fills memory with a constant byte
 * 
 * @head: is the owner of the dog
 * @str: is a string
 * Return: a address
 */
list_t *add_node_end(list_t **head, const char *str)
{
  list_t *new_node, *temp;
  int i;
  new_node = malloc(sizeof(list_t));
  if (new_node == NULL)
  {
    return (NULL);
  }
  new_node->str = malloc(sizeof(const char) * _strlen(str) + 1);
  if (new_node->str == NULL)
  {
    free(new_node);
    return (NULL);
  }
  i = 0;
  while (str[i] != '\0')
    {
      new_node->str[i] = str[i];
      i++;
    }
  new_node->str[i] = '\0';
  new_node->len = _strlen(str);
  new_node->next = NULL;
  if (*head == NULL)
  {
    *head = new_node;
  }
  else
  {
    temp = *head;
    while (temp->next != NULL)
      {
        temp = temp->next;
      }
    temp->next = new_node;
  }
  return (new_node);
  }
