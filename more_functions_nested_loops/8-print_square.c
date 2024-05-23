#include "main.h"
/**
 * print_square - creates a square depending on the value held by size.
 *
 * @size: the value held by size determines when the program stops.
 *
 */

void print_square(int size)
{
	int row, col;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (row = 1; row <= size; row++)
	{
		for (col = 1; col <= size; col++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
