#include "main.h"
/**
 * print_most_numbers - iterates from 0 to 9 and skips
 * Return: void
 */

void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if (n == 2 || n == 4)
		{
		continue;
		}
		_putchar(n + '0');
	}
	_putchar('\n');
}
