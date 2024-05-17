#include <stdio.h>
/**
 * main - this is going to iterate through the alphabet backwards.
 * Return: 0
 */
int main(void)
{
	char nun;

	for (nun = 'z'; nun >= 'a', nun--)
		putchar(nun);

			putchar('\n');
	return (0);
}
