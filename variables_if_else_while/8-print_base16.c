#include <stdio.h>
#include <stdlib.h>
/**
* main - Prints letters
* Return: Always0(Success)
*/
int main(void)
{
int numbers;
char letters;
for (numbers = 0; numbers <= 9; numbers++)
{
putchar(numbers + '0');
}
for (letters = 'a'; letters <= 'f'; letters++)
{
putchar(letters);
}
putchar('\n');
return (0);
}
