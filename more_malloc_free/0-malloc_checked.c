#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: the number of bytes to allocate
 * Return: a pointer to the allocated memory
 *or terminates with status value 98 if malloc fails
 */
void *malloc_checked(unsigned int b)
{ int *ptr;
ptr = malloc(b);
if (ptr == NULL)
{
exit(98);
}
return (ptr);
}
