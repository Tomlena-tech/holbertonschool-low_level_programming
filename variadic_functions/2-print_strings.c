#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_strings - Prints strings followed by a new line.
 * @separator: The string to be printed between the strings.
 * @n: The number of strings passed to the function.
 * @...: The variable number of strings to print.
 *
 * Description: This function takes a variable number of string arguments
 * and prints them, separated by the specified separator. If a string is NULL,
 * "(nil)" is printed instead.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
    va_list args;
    unsigned int i;
    char *str;
    if (n == 0)
    {
        printf("\n");
        return;
    }
    va_start(args, n);
    for (i = 0; i < n; i++)
    {        str = va_arg(args, char *);
        if (str == NULL)
            printf("(nil)");
        else
            printf("%s", str);
        if (i < n - 1 && separator != NULL)
            printf("%s", separator);
}
    va_end(args);
    printf("\n");
}