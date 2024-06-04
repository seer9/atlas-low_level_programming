#include "main.h"
/**
 * strstr - fjvfjv 
 * 
 * @haystack: vjcvmv
 * @needle: jrvmvvv
 * Return: kvivi
 *
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *temp;

		temp = haystack;
		while (*needle == *haystack)
		{
			haystack++, needle++;
		}
		if (*needle == '\0')
			return (temp);
		haystack++;
	}
	return (0);
}
