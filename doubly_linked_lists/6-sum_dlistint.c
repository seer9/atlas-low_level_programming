#include "lists.h"
/**
 * sum_dlistint - sums all the data (n) of a listint_t list
 *
 * @head: the head of the list
 * Return: the sum of all the numbers in the list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
