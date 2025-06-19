#include <stdio.h>
#include <stdlib.h>

/**
* main - Prints letters
* Return: Always0(Success)
*/

int main(void)
{
int numbers;
for (numbers = 0; numbers <= 9; numbers++)
{
putchar(numbers + '0');
if (numbers != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
