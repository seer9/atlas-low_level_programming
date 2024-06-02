#include "main.h"
/**
 * leet - encodes a message.
 *
 * @enc: message after encoding.
 * Return: string in a coded format.
 */

char *leet(char *enc)
{
	int tmp;
	int n;

	char low[] = {'a', 'e', 'o', 't', 'l', '\0'};
	char up[] = {'A', 'E', 'O', 'T', 'L', '\0'};
	char num[] = {'4', '3', '0', '7', '1', '\0'};

	for (tmp = 0; enc[tmp] != '\0'; ++tmp)
	{
		for (n = 0; n < 5; n++)
		{
			if (enc[tmp] == low[n] || enc[tmp] == up[n])
			{
				enc[tmp] = num[n];
			}
		}
	}
	return (enc);
}
