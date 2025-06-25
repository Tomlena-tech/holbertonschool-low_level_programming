#include "main.h"
/**
 *print_square - prints square
 *@size : parameter
 *
 *
 * Return (void)
 */

void print_square(int size)
{
int lon;
int larj;
if (size > 0)
{
for (lon = 0; lon < size; lon++)
{
for (larj = 0; larj < (size - 1); larj++)
_putchar ('#');
_putchar ('#');
_putchar ('\n');
}
}
else
{
_putchar ('\n');
}
}
