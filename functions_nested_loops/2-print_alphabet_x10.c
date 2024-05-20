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
/**
 * print_alphabet_x10 - iterate print_alphabet 10x
 */

void print_alphabet_x10(void)
{
	for (int i = 0; i < 10; i++)
	{
	print_alphabet();
	}
}
