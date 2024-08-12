#include "search_algos.h"
/**
 * binary_search - searches for a value in an array
 * @array: array to search
 * @size: size of the array
 * @value: value to search for
 * Return: index of the value, or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, low, high, mid;

	if (array == NULL || size < 1)
		return (-1);

	low = 0;
	high = size - 1;

	while (low <= high)
	{
	printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
				printf(", ");
		}
		printf("\n");
		mid = (low + high) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
return (-1);
}
