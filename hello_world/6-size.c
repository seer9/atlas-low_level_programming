#include <stdio.h>
/**
 * main - Prints the different types of file types by there size.
 *
 * Return: 0
 */
int main(void)
{
printf("Size of a char: %c byte(s)", sizeof(char));
printf("Size of an int: %d byte(s)", sizeof(int));
printf("Size of a long int: %ld byte(s)", sizeof(long int));
printf("Size of a long long int: %ld byte(s)", sizeof(long long int));
printf("Size of a float: %ld byte(s)", sizeof(float));
return (0);
}

