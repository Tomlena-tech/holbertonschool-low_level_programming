#include "main.h"
/**
* @n: The number to be treated
* print_last_digit - Prints the last digit of a number
* Return: Value of the last digit of number
*/
int print_last_digit(int n)
{int number2;
number2 = (n % 10);
if (number2 < 0)
number2 = (number2 * -1);
_putchar(number2 + '0');
return (number2);
}
