#include "search_algos.h"

int linear_search(int *array, size_t size, int value)
{
    size_t i;

  if(array == NULL || size < 1)
    return (-1);
   
  for (i = 0; i < size; i++)
     {
       if (array[i] == value)
         return (i);
     }
   return (-1);
}