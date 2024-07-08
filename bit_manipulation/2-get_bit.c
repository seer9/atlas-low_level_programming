#include "main.h"
/**
 * get_bit - finds the value of a bit at index
 *
 * @index: where to get the value at
 * @n: the bit itself
 * Return: the value of the bit at index or -1 upon error.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);

	return ((n >> index) & 1);
}
