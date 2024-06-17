#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * _calloc - allocates memory for an array
 *
 * @nmemb: first inputed parameter
 * @size: second inputed parameter
 *
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
	{
		((char *)p)[i] = 0;
	}
	return (p);
}
