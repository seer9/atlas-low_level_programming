#include "main.h"
/**
 * more_numbers - this is a nested loop to display 1-14 10 times.
 * Return: void
 *
 */
void more_numbers(void)
{
	for (long s = 0; s < 10; s++)
	{
		for (long t = 0; t <= 14; t++)
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
