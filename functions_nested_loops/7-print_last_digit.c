#include "main.h"
/**
* main - check the code
*
* Return: Always 0.
*/
int print_last_digit(int n)
{int number2;
number2 = (n % 10);
if (number2 < 0)
number2 = (number2 * -1);
_putchar(number2 + '0');
return (number2);
}
