#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - a function thats as a parameter
 * for each element of an array
 *
 * @array: array to iterate over
 * @size: size of the array
 * @action: the pointer function used
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
