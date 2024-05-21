#include "main.h"

/**
 * print_to_98 - decription.
 *
 * @n: variable in function.
 *
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i == 98)
			{
				putchar('9');
				putchar('8');
				putchar('\n');
			break;
			}
			else
			{
				putchar(i / 10 + '0');
				putchar(i % 10 + '0');
				putchar(', ');
			}
		}
	}
		else
		{
			int i;

			for (i = n; i >= 98; i--)
			{
			if (i == 98)

			{
				putchar('9');
				putchar('8');
				putchar('\n');
			break;
		}
			else
			{
				putchar(i / 10 + '0');
				putchar(i % 10 + '0');
				putchar(', ');
			}
		}
	}
}
