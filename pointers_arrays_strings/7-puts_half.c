#include "main.h"
#include <string.h>
#include <stdio.h>
/**
* puts_half - prints half part of string
*@str: string part printed
*
*Return: (void)
*/
void puts_half(char *str)  
{
int longeur = strlen(str);
if (longeur % 2 == 0)
longeur = longeur / 2;
else
longeur = (longeur + 1) / 2;
while (str[longeur] != '\0')
{
_putchar(str[longeur]);
longeur++;
}
_putchar('\n');
}
