#include "main.h"
/**
 * print_diagonal - prints spaces before the escape keys to create the line.
 *
 * @n: prints the line.
 */


void print_diagonal(int n)
{
	int c = 0;

	while (n > 0)
	{
		if (n < 0)
		{
			break;
		}
		int i = c;

		while (i > 0)
		{
			putchar(' ');
			i--;
		}
		putchar('\\');
		putchar('\n');
		c++;
		n--;
	}
}
