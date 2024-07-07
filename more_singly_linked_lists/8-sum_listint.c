#include "lists.h"
/**
 * sum_listint - adds up the sum of the data held by n in the list
 *
 * @head: the list
 * Return: sum of the numbers in the list held by n.
 */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *tmp;

	sum = 0;
	tmp = head;
	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
