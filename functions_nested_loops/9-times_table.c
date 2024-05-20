#include "main.h"

/**
 * times-table - this will iterate through a 9 x 9 with nested for loops
 *		and be double spaced unless the remainder is more then 9.
 * Return: voided
 */
void times_table(void);
{
	int i;
	int k;
	int ixk;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0')

		for (k = 1; k <= 9; k++)
		{
			int ixk = ((i * k));

			_putchar(',');
			_putchar(' ');

		if (ixk <= 9)
			_putchar(' ');
				else
					_putchar((ixk / 10) + '0');
				_putchar((ixk % 10) + '0');
		}
		putchar('\n');
	}
}
