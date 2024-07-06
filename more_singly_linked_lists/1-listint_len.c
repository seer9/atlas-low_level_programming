#include "lists.h"
/**
 * listint_len - Returns how mant elements are in the list
 *
 * @h: head of the list
 * Return: number of nodes.
 *
 */
size_t listint_len(const listint_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
