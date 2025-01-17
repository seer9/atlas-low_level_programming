#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - prints the name.
 * @name: inputs name.
 * @f: pointer to function.
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
