#include "main.h"
/**
 * _strchr - searches for characters within a string.
 *
 * s: is a pointer to the string you want to search.
 * c: the character you're searching for.
 *
 * Return: the occurances of l.
 */

char *_strchr(char *s, char c)
{
	int tmp;

	tmp = 0;
	while (s[tmp] != '\0')
	{
		if (s[tmp] == c)
		{
			return (&s[tmp]);
		}
		tmp++;
	}
	return (s);
}
