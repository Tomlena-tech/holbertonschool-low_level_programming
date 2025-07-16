#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - Executes a function on each element of an array.
 * @array: The array to iterate over.
 * @size: The number of elements in the array.
 * @action: A function pointer that takes an int and returns void.
 *
 * Description:
 * Applies the function pointed to by action to each element of the array.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;           
if (array == NULL || action == NULL || size == 0)
return;     
for (i = 0; i < size; i++)
{
action(array[i]);  
}
}
