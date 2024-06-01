#include "main.h"
/**
 * _strcat - adds src to dest.
 *
 * @dest: both strings together.
 * @src: depending on the size of dest it adds letters.
 * Return: dest
 *
 */
char *_strcat(char *dest, char *src)
{
	int dest_len;
	int i;
	
	for (dest_len = 0 ;dest[dest_len] != '\0' ; dest_len++)
	{}
	for (i = 0 ;src[i] != '\0' ; i++)
	{
		dest[dest_len + i] = src[i];
	}
	return (dest);
}
