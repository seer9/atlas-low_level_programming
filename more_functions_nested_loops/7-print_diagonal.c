#include "main.h"
/**
 * print_diagonal - n is the static location of putchar. i and c are moving to
 * to the value of n.
 *
 * @n: this is the \ key placer variable i believe.
 */

void print_diagonal(int n)
{
	int c = 0;

	while (n > 0)
	{
		int i = c;

		while (i > 0)
		{
			_putchar(' ');
			i--;
		}
		_putchar('\\');
		_putchar('\n');
		c++;
		n--;
		if (c < 1)
		{
			break;
		}
	}
}
