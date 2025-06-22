#include "main.h"
/**
* main - check the code
*
* Return: Always 0.
*/
int print_last_digit(int number2)
{int number1 = 0;
{if (number2 < 0)
number2 = -number2;
number2 = number2 % 10;
if (number1 < 0)
number1 = -number1;
number1 = number1 % 10;
_putchar (number1 + '0');
return (number1);
}
}
