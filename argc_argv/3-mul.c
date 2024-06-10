#include <stdlib.h>
#include <stdio.h>
/**
 * main - multiply fn and sn but only if
 * theres 3 arguements
 *
 * @argc: arguements being given.
 * @argv: looks for characters so it needs to be converted
 * with the atoi function, then multiples prints the converted
 * arguements.
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int fn;
	int sn;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	fn = atoi(argv[1]);
	sn = atoi(argv[2]);
	printf("%d\n", fn * sn);
	return (0);
}
