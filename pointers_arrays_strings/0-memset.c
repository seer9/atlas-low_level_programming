#include "main.h"
/**
 * _memset - fill a portion of the buffer with ones, and finally prints the
 * contents before and after the modification of the array.
 *
 * @s: A pointer to where you want to set the bytes.
 * @b: The value you want the bytes to be set too.
 * @n: The number of bytes.
 * Return: pointer to s.
 */



char *_memset(char *s, char b, unsigned int n)
{
	unsigned int tmp;

	tmp = 0;

	while (tmp < n)
	{
		s[tmp] = b;
		tmp++;
	}
	return (s);
}
