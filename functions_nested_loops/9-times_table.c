#include "main.h"
#include <unistd.h>
/**
* times_table - Prints the 9 times table, starting with 0 
* 
* Return: Nothing 
*/
void times_table(void)
{
int first_number;
int second_number;
int product;
for (first_number = 0; first_number <= 9; first_number++)
{
for (second_number = 0; second_number <= 9; second_number++)
{
product = (first_number * second_number);
if (second_number == 0)
{_putchar('0' + product);
} 
else
{_putchar(',');
_putchar(' ');

if (product < 10)
{
_putchar(' ');
_putchar('0' + product);
}
else
{
_putchar('0' + (product / 10));
_putchar('0' + (product % 10));
}
}
 }
 _putchar('\n');
}
}
