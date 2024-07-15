#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a listint_t linked list.
 *
 * @head: the head of the list
 * @index: the index of the node to return
 * Return: the address of the Nth node, or NULL if it doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		if (i == index)
			return (current);
		current = current->next;
		i++;
	}
	return (NULL);
}
