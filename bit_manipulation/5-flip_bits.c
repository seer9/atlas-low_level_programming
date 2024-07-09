#include "main.h"
/**
 * flip_bits - counts the number of bits that differ in n     * and m
 * 
 * @n: the number
 * @m: the number to compare to n
 * Return: the number of bits that differ in n and m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flipped;
	
	flipped = n ^ m;
	
	unsigned int count;
	
	count = 0;
	while (flipped > 0)
	{
		flipped &= flipped - 1;
		count++;
	}
	return (count);
}
