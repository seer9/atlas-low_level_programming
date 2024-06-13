#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of characters,
 * and then initializes it with a specific character.
 *
 * @size: input size
 * @c: initual char
 *
 * Return: pointer to the array, or NULL if it fails.
 */

char *create_array(unsigned int size, char c)

{
	char *arr = NULL;
	unsigned int i;

	arr = (char *) malloc(size);

	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
