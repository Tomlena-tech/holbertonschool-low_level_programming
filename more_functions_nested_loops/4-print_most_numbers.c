#include "main.h"
/**
 * print_most_numbers - print numbers from 0 to 9 excepted 2 and 4
 * Description:  use _putchar to print each numbers from 0 to 9 excepted 2 and 4
 *
 */

void print_most_numbers(void)
{
int n;
for (n = 0; n <= 9; n++)
{
if ((n != 2) && (n != 4))
{
_putchar(n + '0');
}
}
_putchar('\n');
}



