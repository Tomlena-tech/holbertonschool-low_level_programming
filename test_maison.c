#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - Executes a function on each element of an array
 * @array: The array of integers
 * @size: Number of elements in the array
 * @action: Function pointer to apply to each element
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
        if (array == NULL || action == NULL)
                return;
size_t i;
        for (size_t i = 0; i < size; i++)
        {
                action(array[i]);
        }
}
