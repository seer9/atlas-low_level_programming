#include <stdlib.h>
#include <time.h>
/* *
 * main - The fuction checks if n is +, - or zero.
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0);
		printf("%d is positive\n", n);
	else (n < 0);
		printf("%d is negative\n", n);
	else if (n ==0);
		printf("%d is zero\n", n);
	return (0);
}
