#include "lists.h"
/**
 * print_listint - prints the elements of a listint_t list
 *
 * @h: the head of the list
 * Return: number of nodes in the list.
 *
 */
size_t print_listint(const listint_t *h)
{
	size_t i;

	i = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
