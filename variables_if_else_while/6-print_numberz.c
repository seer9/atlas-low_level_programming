#include <stdio.h>
/**
 * main - iterate through base 10 using putchar.
 * Return: 0
 */
int main(void)
{
	char o;
	for (o = 0; o < 10; o++)
		putchar((o % 10) + '0');

	putchar('\n');

	return (0);
}

