#include <stdlib.h>
#include "function_pointers.h"
#include <stdio.h>
/** 
 * print_name - Prints a name using a function pointer.
 * print_name_as_is - Prints a name as is.
 * @name: The name to be printed.
 *
 * This function takes a name and prints it directly to the standard output.
 * It does not perform any additional formatting or processing.
 */
void print_name(char *name, void (*f)(char *))
{
    if (name == NULL || f == NULL)
        return;
    f(name);
}
