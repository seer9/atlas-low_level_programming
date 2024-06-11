#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds up all the digits after being converted.
 *
 * @argc: how many arguements
 * @argv: the object of the arguements together.
 * Return: 0
 */
int main(int argc, char *argv[])
{
	unsigned int index, digitIndex, totalSum = 0;

	unsigned int numberOfArguments = argc;

	for (index = 1; index < numberOfArguments; index++)
	{
		for (digitIndex = 0; argv[index][digitIndex] != '\0'; digitIndex++)
		{
			if (!isdigit(argv[index][digitIndex]))
			{
				printf("Error\n");

				return (1);
			}
		}
		totalSum += atoi(arguments[index]);
	}
	printf("%d\n", totalSum);

	return (0);
}
