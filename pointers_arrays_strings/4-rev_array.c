#include "main.h"
/**
 * rev_array - reverses an array of numbers.
 *
 * @a: this is the pointer that looks at a in the main function.
 * @n: the max number of elements in the array.
 */
void rev_array(int *a, int n)
{
	int rev;

	for (rev = n - 1; rev >= 0; rev--)
	{
		if (rev != n - 1)
		{
			printf(", ");
		}
		printf("%d", a[rev]);
	}
	printf("\n");
}
