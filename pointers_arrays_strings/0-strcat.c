#include "main.h"
/**
 * _strcat - puts 2 strings together voiding null bite.
 *
 * @dest: the first string.
 * @src: appends to dest.
 * Return: both strings together.
 */

char *_strcat(char *dest, char *src)
{
	size_t dest_len = _strlen(dest);
	size_t i;

	for (i = 0; src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}
