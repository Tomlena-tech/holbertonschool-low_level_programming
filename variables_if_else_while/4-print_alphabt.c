#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
* main - Prints a text according number
* Return: Always (Success)
*/
int main(void)
{
char letters = 'a';
for (letters = 'a'; letters <= 'z'; letters++)
{
if (letters != 'e' && letters != 'q')
putchar(letters);
}
putchar('\n');
return (0);
}
