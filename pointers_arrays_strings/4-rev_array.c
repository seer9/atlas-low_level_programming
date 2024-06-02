#include "main.h"
/**
 * reverse_array - reverse an array of numbers.
 *
 * @a: the array
 * @n: number of elements.
 */
void reverse_array(int *a, int n)
{
	int tpy;
	int p;

	for (p = n - 1; p >= n / 2; p--)
	{
		tpy = a[n - 1 - p];
		a[n - 1 - p] = a[p];
		a[p] = tpy;
	}
}
