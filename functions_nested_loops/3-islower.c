#include "main.h"

/**
 * _islower - the letter is lowercase
 *
 * @c: this is the lowercase letter
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	return (1);
	else
		return (0);
}
