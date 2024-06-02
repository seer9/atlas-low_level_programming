#include "main.h"
/**
 * cap_string - Caps each new word in the string. 
 *
 * @str: The string being modified.
 */


char *cap_string(char *str)
{
	int tmp = 0;

	while (str[++tmp])
	{
		while (!(str[tmp] >= 'a' && str[tmp] <= 'z'))
			tmp++;

		if (str[tmp - 1] == ' ' || str[tmp - 1] == '\t' ||
			str[tmp - 1] == '\n' || str[tmp - 1] == ',' ||
			str[tmp - 1] == ';' || str[tmp - 1] == '.' ||
			str[tmp - 1] == '!' || str[tmp - 1] == '?' ||
			str[tmp - 1] == '"' || str[tmp - 1] == '(' ||
			str[tmp - 1] == ')' || str[tmp - 1] == '{' ||
			str[tmp - 1] == '}' || tmp == 0)
			str[tmp] = str[tmp] - 32;
	}
	return (str);
}
