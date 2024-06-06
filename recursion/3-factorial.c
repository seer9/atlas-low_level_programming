#include "main.h"
/**
 * factorial - factorial of a given number in main.
 *
 * @n: specified number in main.
 * Return: other then 1 for 0 and 1, it will return the answer from the given number.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
