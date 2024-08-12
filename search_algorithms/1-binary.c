#include "search_algos.h"

int binary_search(int *array, size_t size, int value)
{
    size_t low, high, mid;

   if (array == NULL || size < 1)
        return (-1);

   low = 0;
   high = size - 1;

  while (low <= high)
    {
        mid = (low + high) / 2;

       if (array[mid] == value)
       {
           return (mid);
       }
       else
       {
           if (array[mid] < value)
           {
               low = mid + 1;
           }
           else
           {
               high = mid - 1;
           }
       }
    }
    return (-1);
}