#include "main.h"

/**
 * main - print _putchar followed by a new line with a custom header.
 * Return: 0
 */
int main(void)
{
	{
	char *str = "_putchar";

	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
return (0);
}
