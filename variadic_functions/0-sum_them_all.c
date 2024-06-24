#include "variadic_functions.h"

/**
 * sum_them_all - sums of all the arguments.
 *
 * @n: number of arguments.
 * Return: sum of all the arguments or 0 if n is 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
	{
		return (0);
	}
	int i;

	int sum = 0;
	va_list nums;

	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(nums, int);
	}
	va_end(nums);
	return (sum);
}
