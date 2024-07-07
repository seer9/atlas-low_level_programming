#include "lists.h"
/**
 * free_listint2 - frees the list but sets the head to null.
 *
 * @head: beginning of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}

	if (head == NULL)
		return;

	*head = NULL;
}

