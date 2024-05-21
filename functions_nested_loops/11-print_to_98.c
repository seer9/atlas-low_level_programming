#include "main.h"

/**
 *
 *
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (int i = n; i <= 98; i++)
		{
            		if (i == 98)
			{
				putchar('9');
				putchar('8');
				putchar('\n');
			break;
            		}
			else 
	    		{
				putchar(i / 10 + '0'); // First digit
				putchar(i % 10 + '0'); // Second digit
				putchar(', ');
			}
		}
	}	
		else
		{
		for (int i = n; i >= 98; i--)
		{
		if (i == 98)
		{
				putchar('9');
				putchar('8');
				putchar('\n');
			break;
		}
			else
			{
				putchar(i / 10 + '0'); // First digit
				putchar(i % 10 + '0'); // Second digit
				putchar(', ');
			}
		}
	}
}
