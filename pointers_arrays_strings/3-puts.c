#include "main.h"
#include <stdio.h>
/**
 * _puts - is used to print string with automatic (\n) 
 *@str: string to print in stdout
 *
 *Return: (void)
 *
 */
void _puts(char *str)
{
while (*str)
_putchar(*str++);
_putchar ('\n');
}
