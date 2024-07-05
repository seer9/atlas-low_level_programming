#include "lists.h"
#include <unistd.h>
/**
 * _strlen - function used to count over a strang.
 * @s: the actual string that is being iterated over.
 * Return: this simply returns the number of
 * interations make over the string before the null.
 */
int _strlen(char *s)
{
	int l = 0;

	while (s[l] != '\0')
	{
		l++;
	}
	return (l);
}

