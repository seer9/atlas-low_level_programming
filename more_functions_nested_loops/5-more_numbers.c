#include "main.h"
/**
 * more_numbers - this is a nested loop to display 1-14 10 times.
 * Return: void
 *
 */
void more_numbers(void)
{
	long s;
	for (s = 0; s < 10; s++)
	{
		long t;
		for (t = 0; t <= 14; t++)
		{
			if (t > 9)
			{
				_putchar((t / 10) + '0');
			}
			_putchar((t % 10) + '0');
		}
		_putchar('\n');
	}
}
