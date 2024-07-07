#include "lists.h"
/**
 * delete_nodeint_at_index - deletes nodes
 *
 * @head: the list
 * @index: node to be deleted
 * Return: 1 if complete and -1 if fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *prev;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	tmp = *head;
	prev = NULL;

	for (i = 0; i < index && tmp != NULL; i++)
	{
		prev = tmp;
		tmp = tmp->next;
	}
	if (tmp == NULL)
		return (-1);

	prev->next = tmp->next;
	free(tmp);
	return (1);
}
