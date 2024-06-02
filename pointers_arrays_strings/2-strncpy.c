#include "main.h"
/**
 * _strncpy - similar standard library function.
 * @dest: The string you want to copy into (the destination).
 * @src: The string you want to copy from (the source).
 * @n: The maximum number of characters to copy.
 * Return: desired string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int call;

	for (call = 0; call < n && src[call] != '\0'; call++)
	{
		dest[call] = src[call];
	}
	for (; call < n; call++)
	{
		dest[call] = '\0';
	}
	return (dest);
}
