#include "main.h"
/**
 * _puts_recursion - prints a character from the
 * string 1 by 1 until the null.
 *
 * @s: string being printed.
 *
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
