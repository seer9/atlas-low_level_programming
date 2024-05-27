#include "main.h"
/**
 * _puts - prints a string, character by character.
 * @str: the string being printed by the puts function.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
