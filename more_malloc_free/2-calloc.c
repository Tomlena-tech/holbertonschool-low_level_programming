#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory, or NULL if it fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
int size_array = 0;
char *ptr;
if (nmemb == 0 || size == 0)
{
    return (NULL);
}
size_array = nmemb * size;
ptr = malloc(size_array);
if (!ptr)
{
return (NULL);
}
memset(ptr, 0, size_array);
return (ptr);
}
