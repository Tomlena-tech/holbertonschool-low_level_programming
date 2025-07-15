#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/**
 * function_pointers.h - Header file containing function pointer prototypes.
 *
 * Description:
 * Contains declarations for functions using function pointers.
 */

/**
 * print_name - Prints a name using a given function.
 * @name: The name to be printed.
 * @f: A function pointer that takes a char pointer and returns void.
 */
void print_name(char *name, void (*f)(char *));
int _putchar(char c);

/**
 * func_ptr - Typedef for a function pointer taking a char* and returning void.
 */
typedef void (*func_ptr)(char *);

#endif /* FUNCTION_POINTERS_H */
