#include "main.h"
/**
 * rev_string - similar to task 2, you are swapping the value of the beginning
 * of the string with the end.
 *
 * @s: this is where the words "My School" is held.
 *
 */
void rev_string(char *s)
{
	int len = _strlen(s);
	int start = 0;
	int end = len - 1;

	while (start < end)
	{
		char temp = s[start];

		s[start] = s[end];
		s[end] = temp;

		start++;
		end--;
	}
}
