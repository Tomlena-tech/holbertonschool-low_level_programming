#include "main.h"
/**
 * print_line -  draw a line with underscore.
 * @n member parameter
 *
 * description show the line  with '_' type n time
 * if n = 0 just show ('\n)
 *
 */
void print_line(int n)
{
while (n-- > 0)
{ _putchar ('_');
}
_putchar ('\n');
return;
}
