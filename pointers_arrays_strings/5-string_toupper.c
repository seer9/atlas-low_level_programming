#include "main.h"
/**
 * string_toupper - changes only the lower case to uppercase.
 * the letter a would look like this. > (97 - 32 = 65) = the ascii value
 * of the lowercase letter is higher then the uppercsase.
 *
 * @str: the string being changed.
 * Return: the string with the correct letters changed.
 */
char *string_toupper(char *str)
{
	int tmp;

	for (tmp = 0; str[tmp] != '\0'; tmp++)
	{
		if (str[tmp] >= 'a' && str[tmp] <= 'z')
		{
			str[tmp] = str[tmp] - 32;
		}
	}
	return (str);
}
