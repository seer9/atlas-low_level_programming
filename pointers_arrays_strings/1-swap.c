#include "main.h"
/**
 * swap_int - using pointers, this changes the value of b to the value that the pointer *a is pointing at.
 *
 * @a:the variable we need to hang onto.
 * @b:the one i wanted to change.
 *
 */


void swap_int(int *a, int *b)
{
    int temp = *b;
    
    *b = *a;
    *a = temp;
}
