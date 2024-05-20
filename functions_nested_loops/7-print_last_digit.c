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
		_putchar(mod);
return (mod);
}
