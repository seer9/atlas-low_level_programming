#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed
 * by a new line.
 *
 * @separator: string to be printed between numbers.
 * @n: number of arguments.
 * Return: sum of all the arguments or 0 if n is 0.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list nums;

	if (separator == NULL)
		separator = "";
	if (n > 0)
	{
		va_start(nums, n);
		for (i = 0; i <= n; i++)
		{
			printf("%d%s", va_arg(nums, int), separator);
		}
		va_end(nums);
	}
}
