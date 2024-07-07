#include "lists.h"
/**
 * get_nodeint_at_index - finds a specific node
 * in the list
 *
 * @head: the list
 * @index: the node being found.
 *
 * Return: NULL if it doesnt find it or finds it.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	tmp = head;
	i = 0;

	while (tmp != NULL)
	{
		if (i == index)
			return (tmp);
		tmp = tmp->next;
		i++;
	}
	return (NULL);
}
