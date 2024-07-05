#include "lists.h"
/**
 * free_list - frees a list.
 * @head: head of the list.
 */

void free_list(list_t *head)
{
	list_t *current, *next;

	if (head != NULL)
	{
		current = head;
		next = current->next;

		while (current != NULL)
		{
			free(current->str);
			free(current);
			current = next;
			next = next->next;
		}
		free(current->next);
		free(current);
	}
}
