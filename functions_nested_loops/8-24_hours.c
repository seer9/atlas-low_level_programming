#include "main.h"

/**
 * jack_bauer - simple function showing every minute for every
 * 		hour of the day. basically will iterate through
 * 		the current value of min inside of the current value of
 * 		hour.
 *
 */
void jack_bauer(void);
{
	int hour = 0;
	int min = 0;

	for (hour <= 23; hour++)

		for (min <= 59; min++)
		{
		_putchar((hour / 10) + '0');
		_putchar((hour % 10) + '0');
		_putchar(':');
		_putchar((min / 10) + '0');
		_putchar((min % 10) + '0');
		_putchar(('\n');
		}
	}
}





}
