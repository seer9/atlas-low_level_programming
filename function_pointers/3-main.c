#include "calc.h"
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
    int a, b; 

    if (argc != 4)
    {
        fprintf(stderr, "Error\n"); // Use fprintf for standard error
        return (98);
    }

    a = atoi(argv[1]);
    b = atoi(argv[3]);

    int (*func)(int, int) = get_op_func(argv[2]);
    if (func == NULL)
    {
        fprintf(stderr, "Error\n"); // Use fprintf for standard error
        return (99);
    }

    printf("%d\n", func(a, b)); 

    return (0);
}
