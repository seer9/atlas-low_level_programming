#include <stdio.h>
/**
 * main - this will iterate through 1 - 9 but will be seperated by commas.
 * Return: 0
 */
int main(void)
{
	int top;

	for (top = '0'; top <= '9'; top++)
	{
		putchar(top);
		
	if (top != '9')
	{
		putchar(', ');
	}
	putchar('\n');
	}
	return (0);
}
