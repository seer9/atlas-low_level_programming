#include "main.h"
/**
 * print_line - creates lines based on the value of n.
 *
 * @n: determines the length.
 */

void print_line(int n)
{
	int t;

	if (n < 0) 
	{
		_putchar('-');
		_putchar('\n');
		return;
	}
	else if
		(n == 0)
		{
			_putchar('\n');
			return;
		}
	for (t = 0; t < n; t++)
	{
		_putchar('_');
	}
	_putchar('\n');
} 
