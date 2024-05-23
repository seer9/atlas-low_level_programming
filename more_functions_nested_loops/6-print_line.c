#include "main.h"
/**
 * print_line - this prints a line varying in length.
 * 
 * @n: decides how long the line is.
 */

void print_line(int n)
{
	int t;

	if (n > 0)
	{
		_putchar ('\n');
	}
	else
		for (; t < n; t++)
		{
			_putchar('_');
		}
	_putchar('\n');
}
