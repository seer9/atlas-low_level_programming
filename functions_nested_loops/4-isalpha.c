#include "main.h"

/**
 * _isalpha - This is going to look for a letter.
 *
 * @c: input
 * Return: 0
 */

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
	return (1);

	if (c >= 'a' && c <= 'z')
	return (1);
else
	return (0);
}

