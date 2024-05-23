#include "main.h"
/**
 * print_diagonal - prints spaces before the escape keys to create the line.
 *
 * @n: prints the line.
 */

void print_diagonal(int length)
{
	if (length > 0)
	{

		int col = 0;

		while (col < length)
		{
			int space = 0;

			while (space < col)
			{
				putchar(' ');
				space++;
			}
			putchar('\\');
			putchar('\n');
			col++;
		}
	}
	else
	{
		putchar('\n');
	}
}
