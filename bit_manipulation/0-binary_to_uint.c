#include "main.h"
/**
 * binary_to_uint - converts a number from binary to an unsigned int.
 *
 * @b: number to be converted
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num;
	int i;

	num = 0;

	if (b == NULL)
		return (0);

	i = 0;
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		num = 2 * num + (b[i] - '0');
		i++;
	}
	return (num);
}
