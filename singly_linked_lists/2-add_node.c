#include "lists.h"
#include <string.h>
/**
 * _strlen - function used to count over a strang.
 * @s: the actual string that is being iterated over.
 * Return: this simply returns the number of
 * interations make over the string before the null.
 */
int _strlen(char *s)
{
	int l = 0;

	while (s[l] != '\0')
	{
		l++;
	}
	return (l);
}
/**
  * add_node - fills memory with a constant byte
  * 
  * @head: names in the list
  * @str: is a string
  * Return: a address
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = _strlen(*str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
