#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements in the array
 * @size_t size_array: size_t size_array of each element
 *
 * Return: pointer to allocated memory, or NULL if it fails
 */
void *_calloc(unsigned int nmemb, unsigned int size_array)
{
char *ptr;
unsigned int i;
if (nmemb == 0 || size_array == 0)
return (NULL);
ptr = malloc(nmemb * size_array);
if (ptr == NULL)
return (NULL);
for (i = 0; i < nmemb * size_array; i++)
ptr[i] = 0;
return (ptr);
}
