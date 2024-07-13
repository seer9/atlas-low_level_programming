#include "lists.h"
/**
 * dlistint_len - counts out how many elements are in the linked list.
 *
 * @h: the start of the list
 * Return: the number of elements in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
