#include "lists.h"
/**
 * insert_nodeint_at_index - places a node at a desired spot
 *
 * @head: the list
 * @idx: place to put it
 * @n: what goes in the new node
 * Return: address of the created node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp;
	unsigned int i;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	temp = *head;
	for (i = 0; i < idx - 1 && temp != NULL; i++)
		temp = temp->next;

	if (temp == NULL)
		return (NULL);

	new->next = temp->next;
	temp->next = new;

	return (new);
}
