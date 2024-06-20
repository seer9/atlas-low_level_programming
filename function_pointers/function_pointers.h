#ifdef _FUNC_POINTERS_
#define _FUNC_POINTERS_
#include <stddef.h>
void print_name(char *name, void (*f)(char *));

#endif
