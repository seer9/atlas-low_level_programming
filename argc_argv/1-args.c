#include <stdio.h>
/**
 * main - returns the number of arguments.
 *
 * @argc: max number of argments
 * @argv: the arguements being passed in.
 *
 * Return: number of arguements.
 */
int main(int argc, char *argv[])
{
	int args;

	args = argc - 1;

		printf("%d\n",args);
	return (0);
}



