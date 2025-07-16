#include <stdlib.h>
#include "function_pointers.h"
#include <stdio.h>
/** 
 * print_name - Prints a name using a function pointer.
 * @name: The name to be printed.
 @f: A pointer to the function that takes a char as argument.
 * description: This function calls the function pointed by f, passinfd name as argument.
 * If name or f is NULL, the function does nothing.
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
f(name);
}
