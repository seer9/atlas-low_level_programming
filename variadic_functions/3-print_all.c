#include "variadic_functions.h"

void print_all(const char * const format, ...)
{
	int index;
	char *string;
	char *separator = "";
	va_list arguments;
    
	index = 0;
	va_start(arguments, format);
    
	if (format)
	{
		while (format[index])
		{
			switch (format[index])
			{
				case 'c':
					printf("%s%c", separator, va_arg(arguments, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(arguments, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(arguments, double));
					break;
				case 's':
					string = va_arg(arguments, char *);
					if (str != NULL)
					{
						printf("%s", str);
					}
					else
					{
						printf("(nil)");
					}
					break;
				default:
					index++;
					continue;
			}
			separator = ", ";
			index++;
		}
	}
	printf("\n");
	va_end(arguments);
}
