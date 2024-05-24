#include <stdio.h>
/**
 * Fizz - Buzz
 *
 *@count: the counter
 *Return: 0
 */
int Fizz(int count)
{
	for (count = 1; count <= 100; count++)
	{
		if (count % 3 == 0)
		{
			printf("Fizz");
		}
		if (count % 5 == 0)
		{
			printf("Buzz");
		}
		if (count % 3 != 0 && count % 5 != 0)
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
