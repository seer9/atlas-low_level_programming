#include "main.h"
/**
 * _memcpy - takes items from source and places them in the
 * same order at destination.
 *
 * @dest: where you want to copy data to.
 * @src: where the data you want to copy comes from.
 * @n: the number of bytes you want to copy.
 * Return: the desired output.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int tmp;

	for (tmp = 0; tmp < n; tmp++)
	{
		dest[tmp] = src[tmp];
	}
	return (dest);
}
