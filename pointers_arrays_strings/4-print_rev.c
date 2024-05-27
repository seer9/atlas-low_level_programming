#include "main.h"
/**
 * print_rev - prints the string character by character
 * starting at the end and iterating to the beginning.
 *
 * @s:the same string as 3 but it gets printed in reverse.
 */
void print_rev(char *s)
{
	int l;
	int k;

	k = 0;

	while (s[k] != '\0')
	{
		k++;
	}
	for (l = k - 1; l >= 0; l--)
	{
		_putchar(s[l]);
	}
	_putchar('\n');
}
