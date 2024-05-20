#include "main.h"

/**
 * main - print _putchar followed by a new line with a custom header.
 * Return: 0
 */
int main(void)
{
    char *str = "_putchar";
	int slam;

    for (slam = 0; str[slam] != '\0'; slam++)
    {
        _putchar(str[slam]);
    }
    _putchar('\n');

    return 0;
}

