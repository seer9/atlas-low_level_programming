#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	printf("%d is positive\n", n);
	else if (n < 0)
	printf("%d is negative\n", n);
	else
<<<<<<< HEAD
	printf("%d is zero\n", n);
=======
		printf("%d is zero\n", n);

>>>>>>> 62e7a3092070b74e39cf8fbd901678c7364febd1
	return (0);
}
