#include <stdio.h>
/**
 *
 *
 *
 *
 */
int main(int __attribute__((unused)) argc, char *argv[])
{
        int n;
	
	for (int n = 1; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}
