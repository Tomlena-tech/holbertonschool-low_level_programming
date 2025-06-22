#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number from which the last digit will be extracted
 *
 * Return: The value of the last digit
 */
int print_last_digit(int n)
{int number2;
number2 = (n % 10);
if (number2 < 0)
number2 = (number2 * -1);
_putchar(number2 + '0');
return (number2);
}
