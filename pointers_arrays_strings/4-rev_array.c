#include "main.h"
/**
 * rev_array - reverses an array of numbers.
 *
 * @a: this is the pointer that looks at a in the main function.
 * @n: the max number of elements in the array.
 */
void rev_array(int *a, int n)
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
