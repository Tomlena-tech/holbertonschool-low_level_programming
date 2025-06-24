#include "main.h"
/**
 *print_diagonal - prints a diagonal
 *@n: parameter
 *Return:returns nothing
 *
 *
 */

void print_diagonal(int n)
{ int ligne;
int espace;  
if (n > 0)
{
for (ligne = 0; ligne < n; ligne++)
{
for (espace = 0; espace < ligne; espace++)
_putchar (' ');
_putchar ('\\');
if (ligne == (n - 1))
continue;
_putchar ('\n');
}
}
_putchar ('\n');
}

