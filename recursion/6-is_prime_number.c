#include "main.h"

/**
 * is_divisible - Checks if a number is divisible by another number.
 * @n: The number to be checked.
 * @d: The divisor.
 *
 * Return: If the number is divisible - 0.
 *         If the number is not divisible - 1.
 */
int is_divisible(int n, int d)
{
	if (d * d > n)
	{
		return (1);
	}
	if (n % d == 0)
	{
		return (0);
	}
	return (is_divisible(n, d + 1));
}

/**
 * is_prime_number - Checks if a number is prime using recursion.
 *
 * @n: The number in main.
 * Return: If the integer is not prime, return 0
 * or if the number is prime, return 1.
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	if (n % 2 == 0)
	{
		return (0);
	}
	return (is_divisible(n, 3));
}
