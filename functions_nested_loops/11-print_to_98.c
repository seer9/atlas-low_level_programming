#include "main.h"

/**
 * print_to_98 - decription.
 *
 * @n: variable in function.
 *
 */

void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i == 98)
			{
				_putchar('9');
				_putchar('8');
				_putchar('\n');
			break;
			}
			else
			{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
				_putchar(', ');
			}
		}
	}
		else
		}

			for (i = n; i >= 98; i--)
			{
			if (i == 98)

			{
				_putchar('9');
				_putchar('8');
				_putchar('\n');
			break;
		}
			else
			{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
				_putchar(', ');
			}
		}
	}
}
