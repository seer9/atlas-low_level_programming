#include <stdio.h>
/**
 * main - this is going to iterate through hexadecimal numbers
 * and there corasponding letter value.
 * Return: 0
 */
int main(void)
{
	char car;
	char truck;

	for (car = '0'; car <= '9'; car++)
		putchar(car);
	for (truck = 'a'; truck <= 'f'; truck++)
		putchar(truck);
	putchar('\n');
	return (0);
}	
