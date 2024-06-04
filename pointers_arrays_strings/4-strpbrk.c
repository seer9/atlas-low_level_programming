#include "main.h"
/**
 * _strpbrk - locates the first occurrence in a string.
 *
 * @s: The string to be searched.
 * @accept: The set of bytes to be searched for.
 * Return: the matched byte/bytes.
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return ('\0')
}
