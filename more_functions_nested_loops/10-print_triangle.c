#include "main.h"
/**
 * print_triangle - As long as the values of rows and col are < the value
 * given to size.
 *
 * @size: determines the size of the triangle.
 * Return: void
 *
 */



void print_triangle(int size)
{
	int row;
	int col;

	if (size <= 0)
	{
		putchar('\n');
		return;
	}
	for (row = 0; row < size; row++)
	{
		for (col = 0; col < (size - row) - 1; col++)
		{
			putchar(' ');
		}
		for (col = 0; col <= row; col++)
		{
			putchar('#');
		}
		putchar('\n');
	}
}
