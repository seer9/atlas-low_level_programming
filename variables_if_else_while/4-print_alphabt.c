#include <stdio.h>

/**
 * main - this is going to go through the alphabet but skip 'e' and 'q'
 *
 * Return: 0
 */

int main(void)
{
	char i;
		for (i = 'a'; i <= 'z'; i++)
		{
			if (i != 'e' && i != 'q')
				putchar(i);
		}
		putchar("\n");
		return (0);
}
