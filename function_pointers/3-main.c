#include "3-calc.h"

/**
 * main - how the operation is carried out.
 * 
 * @argc: number of arguments.
 * @argv: the arguement its looking for.
 * 
 * Return: 0 if 2 positive ints are entered.
 */

int main(int argc, char *argv[])
{
	int a, b, res;

	char *op;
	
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	op = argv[2];
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	res = get_op_func(argv[2]);
	if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", res);
	return (0);
}
