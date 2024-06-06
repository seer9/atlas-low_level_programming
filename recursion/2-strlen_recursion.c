#include "main.h"
/**
 * _strlen_recursion - returns the length of the string.
 *
 * @s: the string being counted.
 * Return: number of turns before null.
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
