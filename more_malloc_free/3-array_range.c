#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * array_range - creates an array of integers
 * and allocates the adequate amount.
 *
 * @min: first intput parameter
 * @max: second input parameter
 *
 * Return: 0 when its done
 */

int *array_range(int min, int max)
{
	int *arr, index, length;

	if (min > max)
		return (NULL);

	length = max - min + 1;

	arr = malloc(sizeof(int) * length);

	if (arr == NULL)
		return (NULL);

	index = 0;

	while (index < length)
	{
		arr[index] = min + index;
		index++;
	}
	return (arr);
}
