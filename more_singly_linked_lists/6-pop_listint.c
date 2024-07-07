#include "lists.h"
/**
 * pop_listint - deletes the head of a list
 *
 * @head: the beginning of the list
 * Return: 0 of empty or the data held in the node.
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (*head == NULL)
		return (0);

	n = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);
	return (n);
}
