#include "main.h"
/**
 *print_triangle - prints a triangle
 *@size: size parameter of triangle
 *
 *return: returns nothing
 *
 */

void print_triangle(int size)
{
int ink1;
int ink2;
if (size > 4)
{
for (ink1 = 1; ink1 <= size; ink1++)
{
for ((ink2 = size - ink1); ink2 > 0; ink2--)
_putchar(' ');
for (ink2 = 0; ink2 < ink1; ink2++)
_putchar('#');
if (ink1 == size)
continue;

_putchar('\n');
}
}
_putchar('\n');
}
