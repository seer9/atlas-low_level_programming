#include "main.h"

/**
 * print_last_digit - This is going to display the final digit.
 *
 * @t: the variable that works with mod.
 * Return: 0
 */

int print_last_digit(int t)
{
	int mod = t % 10;

	if (mod < 0)

		mod *= -1;

	_putchar(mod + '0');

return (mod);
}
