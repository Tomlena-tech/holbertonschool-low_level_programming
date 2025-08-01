#include <stdio.h>
#include "function_pointers.h"  
#include <stddef.h>
/**
 * int_index - Searches for an integer in an array.
 * @array: The array to search.
 * @size: The number of elements in the array.
 * @cmp: A function pointer that compares two integers.
 *
 * Return: The index of the first element for which cmp does not return 0,
 *         or -1 if no element matches or size is less than or equal to 0.
 */
 int int_index(int *array, int size, int (*cmp)(int))
 {     int i;

     if (array == NULL || cmp == NULL || size <= 0)
         return (-1);

     for (i = 0; i < size; i++)
     {
         if (cmp(array[i]) != 0)
             return (i);
     }
     return (-1);
 }
