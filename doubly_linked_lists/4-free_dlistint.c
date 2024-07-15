#include "lists.h"
/**
 * free_dlistint - frees the doubly linked list
 *
 * @head: pointer to the head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;

	while (current != NULL)
	{
		dlistint_t *temp = current;

		current = current->next;
		free(temp);
	}
}
