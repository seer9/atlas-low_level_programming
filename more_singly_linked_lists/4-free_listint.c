#include "lists.h"
/**
 * free_listint - frees the listint list
 *
 * @head: beginning of the list
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
