#include "main.h"

/**
 * print_sign - This will check what the sign is.
 *
 * @n: the needed variable.
 * Return: 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
	return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
	return (0);
	}
	else
	{
		_putchar('-');
	return (-1);
	}
}
