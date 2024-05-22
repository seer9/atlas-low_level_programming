#include "main.h"

/**
 * print_numbers - this is going to iterate through 9.
 *
 * @n: the variable going throught the numbers.
 * Return: void
 */
void print_numbers(void)
{
int n;
for (n = '0'; n <= '9'; n++)
    _putchar("%d", n);
    _putchar("\n");
}
