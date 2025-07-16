#include <stdio.h>
#include "variadic_functions.h"
/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: The number of parameters.
 * Description: This function takes a variable number of arguments
 * and returns their sum. If no arguments are passed (n is 0),
 * it returns 0.
 * @...: The variable number of arguments to sum.
 * Return: The sum of all parameters, or 0 if n is 0.
 * This function uses the stdarg.h library to handle
 * variable argument lists.
 */
int sum_them_all(const unsigned int n, ...)
{
    va_list args;
    unsigned int i, sum = 0;
    if (n == 0)
        return (0);
    va_start(args, n);
    for (i = 0; i < n; i++)
    {
        sum += va_arg(args, int);
    }
    va_end(args);
    return (sum);
}
