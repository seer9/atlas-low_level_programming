#include "main.h"

/**
 * print_alphabet - iterate over the alphabet all lowercase
 *
 * Return: 0
 */
void print_alphabet(void)
{
	int v;

	for (v = 'a'; v <= 'z'; v++)
	{
		_putchar(v);
	}
	_putchar('\n');
}
