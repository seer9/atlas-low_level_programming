#include "main.h"
/**
 * finder - searches before and after the number.
 *
 * @n: given by main.
 * @top: end
 * @bottom: start
 * Return: only returns natural square root of a number in the range of n.
 */
int finder(int n, int bottom, int top)
{
	int mid;

	if (bottom > top)
	{
		return (-1);
	}
	mid = bottom + ((top - bottom) / 2);

	if (mid * mid == n)
	{
		return (mid);
	}
	else if (mid * mid < n)
	{
		return (finder(n, mid + 1, top));
	}
	else
	{
		return (finder(n, bottom, mid - 1));
	}
}

/**
 * _sqrt_recursion - find the square root of a number.
 *
 * @n: the number provided in main.
 * Return: -1 if less then 0 or the output from the function
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (finder(n, 0, n / 2 + 1));
}
