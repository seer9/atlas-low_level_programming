#include "search_algos.h"
/**
 * binary_search - searches for a value in an array
 *
 * @array: array to search
 * @size: size of the array
 * @value: value to search for
 *
 * Return: index of the value, or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
    size_t i, low, high, mid;

    /* if array is NULL or size is less than 1, return -1 */
    if (array == NULL || size < 1)
        return (-1);
    /* initialize low and high */
    low = 0;
    high = size - 1;

    while (low <= high)
    {
    /* print the half being searched */
        printf("Searching in array: ");
        for (i = low; i <= high; i++)
        {
            printf("%d", array[i]);
            if (i < high)
                printf(", ");
        }
        printf("\n");

    /* where the middle is */
        mid = (low + high) / 2;

    /* check the middle for the value */
        if (array[mid] == value)
        {
            return (mid);
        }
    /* if the middle is less than the target, search the right half */
        else if (array[mid] < value)
        {
            low = mid + 1;
        }
    /* if the middle is greater than the target, search the left half */
        else
        {
            high = mid - 1;
        }
    }
    /* value is not found, return -1 */
    return (-1);
}