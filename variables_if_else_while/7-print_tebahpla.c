#include <stdio.h>
/**
 * main - this is going to iterate through the alphabet backwards.
 * Return: 0
 */
int main(void)
{
	char Q;

	for (Q = 'z'; Q >= 'a', Q--)
		putchar(Q);

		putchar('\n');
	return (0);
}
