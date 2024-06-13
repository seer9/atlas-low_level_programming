#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 *
 * @s1: first string from main.
 * @s2: second string in main.
 *
 * Return: pointer  to allocated space in
 * memory or to NULL.
 */

char *str_concat(char *s1, char *s2)
{
	char *new_str;
	unsigned int k, length, s2len;

	length = 0;
	s2len = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[length] != '\0')
	{
		length++;
	}
	while (s2[s2len] != '\0')
	{
		s2len++;
	}
	new_str = malloc(sizeof(char) * (length + s2len + 1));
	if (new_str == NULL)
	{
		return (NULL);
	}
	for (int i = 0; i < length + s2len; i++)
	{
		if (i < length)
		{
			new_str[i] = s1[i];
		}
		else
		{
			new_str[i] = s2[i - length];
		}
	}
	new_str[length + s2len] = '\0';
	return (new_str);
}
