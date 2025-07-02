#include "main.h"
#include <stdio.h>
/**
 * _print_rev_recursion - prints charactere in recursive way
 *@s: string used to reverse
 *
 *
 *Return : nothing
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
  {
  return;
  _putchar('\n');
  }
_print_rev_recursion (s + 1);
_putchar (s[0]);
}
