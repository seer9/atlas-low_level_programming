#include "main.h"
/**
 * _isdigit - Entry point
 *
 * @c: c is a number and thats what im looking for.
 * Return: 1 or 0
 */

int _isdigit(int c)
{
    if (c >= '0' && c <= '9')
    return (1);
    else
    return (0);
}
