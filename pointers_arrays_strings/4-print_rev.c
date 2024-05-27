#include "main.h"
/**
 * print_rev - prints the string character by character
 * starting at the end and iterating to the beginning.
 *
 * @s:the same string as 3 but it gets printed in reverse.
 */
void print_rev(char *s)
{
	int len = _strlen(s);
	int i;

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
