#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - searches for an int
 * in an array.
 *
 * @array: passed array from main.
 * @size: size of the array.
 * @cmp: pointer to funciton.
 * Return: position of the int in the
 * array.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = 0;
	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	{
		while (i < size)
		{
			if (cmp(array[i]) != 0)
				return (i);
			i++;
		}
	}
	return (-1);
}
