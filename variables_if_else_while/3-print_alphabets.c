#include <stdio.h>

/**
 * main - var named 'i' is used to interate through the alphabet for the 
 * 		lowercase letters then in capital letters.
 * Return: 0
 */

int main(void)
{
        char i;

        for (i = 'a'; i <= 'z'; i++)
                putchar(i);

	for (i = 'A'; i <= 'Z'; i++)
		putchar(i);

        putchar('\n');

        return (0);
}
