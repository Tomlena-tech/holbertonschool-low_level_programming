#include "main.h"

/**
* factorial - searchs for the factorial of a number
* @n: the number to find the factorial of
*
* Return: the factorial of the number
*/
int factorial(int n)
{
int next_number;
 
if(n == 0)
return (1);
else if (n < 0)
return (-1);
next_number = factorial(n - 1);
return (n * next_number);
}
