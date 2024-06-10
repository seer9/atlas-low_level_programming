#include <stdio.h>
/**
 * main - prints the arguement given to it.
 *
 * @argc: arguements given
 * @argv: the object of the arguements.
 *
 * Return: the arguements given seperated
 * by new lines.
 *
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
