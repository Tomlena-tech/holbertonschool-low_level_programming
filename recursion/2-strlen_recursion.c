#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion count the length recursively 
 *@s: string to calculate
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
return(0);
return 1 + _strlen_recursion(s + 1);
}
