#include "main.h"
/**
 * finder - searches before and after the number.
 *
 * _sqrt_recursion - find the square root of a number.
 *
 * @top: end
 * @bottom: start
 * @n: the number provided in main.
 * Return: only returns natural square root of a number in the range of n.
 */
int finder(int n, int bottom, int top)
{
	if (bottom > top)
	{
		return (-1);
	}

	int mid; 
		
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
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
		return (finder(n, 0, n / 2 + 1));
}
