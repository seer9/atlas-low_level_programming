#include <stdio.h>
/**
 * main - Buzz
 *
 * Return: 0
 */

int main(void)
{
	int count;

	for (count = 1; count <= 100; count++)
	{
		if (count % 3 == 0)
		{
			printf("Fizz");
		}
		else if (count % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", count);
		}
		if (count == 100)
		{
			printf("\n");
		}
		printf(" ");
	}
	return (0);
}
