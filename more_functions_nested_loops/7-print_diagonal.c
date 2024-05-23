#include "main.h"
/**
 * print_diagonal - prints spaces before the escape keys to create the line.
 *
 * @n: prints the line.
 */

void print_diagonal(int n)
{
	if (n > 0)
	{

		int col = 0;

		while (col < n)
		{
			int space = 0;

			while (space < col)
			{
				_putchar(' ');
				space++;
			}
			_putchar('\\');
			_putchar('\n');
			col++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
