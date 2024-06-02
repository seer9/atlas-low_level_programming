#include "main.h"
/**
 * _strcmp - compares two strings, s1 and s2.
 * @s1: character array with the value "Hello"
 * @s2: character array with the value "World!"
 * Return: the value comparison from ASCII.
 */


int _strcmp(char *s1, char *s2)
{
	int call = 0;

	while (s1[call] != '\0' && s2[call] != '\0')
	{
		if (s1[call] != s2[call])
		{
			return (s1[call] - s2[call]);
		}
		call++;
	}
	return (s1[call] - s2[call]);
}
