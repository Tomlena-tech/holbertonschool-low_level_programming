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
typedef void (*func_ptr)(char *);
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
int (*get_op_func(char *s))(int, int);

/**
 * int_index - Searches for an integer in an array.
 * @array: The array to search.
 * @size: The number of elements in the array.
 * @cmp: A function pointer that compares two integers.
 *
 * Return: The index of the first element for which cmp does not return 0,
 *         or -1 if no element matches or size is less than or equal to 0.
 */


/**
 * func_ptr - Typedef for a function pointer taking a char* and returning void.
 */


#endif /* FUNCTION_POINTERS_H */
