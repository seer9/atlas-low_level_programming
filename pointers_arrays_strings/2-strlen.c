#include "main.h"
/**
 * _strlen - function used to count over a strang.
 * @s: the actual string that is being iterated over.
 *
 */
int _strlen(char *s)
{
	int l = 0;
	while (s[l] != '\0')
	{
		l++;
	}
	return l;
}
