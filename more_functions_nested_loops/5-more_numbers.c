#include "main.h"
/**
 * - void more_numbers(void) - prints 10 times
 * description : print 10 times numbers from 0 to 14
 *
 * Return(void)
 */
void more_numbers(void)
{
int n;
int r;
for (n = 0; n < 10; n++)
{
for (r = 0; r <= 14; r++)
{
if (r > 9)
{
_putchar ((r / 10) + '0');
}
_putchar ((r % 10) + '0');
}
_putchar('\n');
}
}
