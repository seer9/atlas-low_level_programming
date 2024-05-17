#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - assigns a random number to n.
 *divide the random number by 10 to find the last number then finding the number.
 *return: 0
 */

int main(void)
{
	int n;
 	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = (n % 10);
	printf("Last digit of %d is %d ", n, last);
	if (last > 5)
	{
		printf("and is greater than 5\n");
	}
	if (last < 6 && last != 0)
	{
		printf("and is less than 6 and not 0\n");
	}
	if (z == 0)
	{
		printf("and is 0\n");
	}
	return (0);
}
