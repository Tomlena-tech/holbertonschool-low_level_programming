#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range- allocates memory for an array, using malloc
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory, or NULL if it fails
 */             
int *array_range(int min, int max)
{
int *ptr;
int i, size;
if (min > max)
return (NULL);
size = max - min + 1;
ptr = malloc(size * sizeof(int));
if (ptr == NULL)
return (NULL);
for (i = 0; i < size; i++)
ptr[i] = min + i;
return (ptr);
}
