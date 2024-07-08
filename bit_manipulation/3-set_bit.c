#include "main.h"
/**
 * set_bit - sets the value of a bit at a certain location
 * @n: the bit
 * @index: the location
 * Return: 1 if it is successful and -1 anytime else.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);

	*n |= 1 << index;
	return (1);
}
