#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * print_numbers - affiche les chiffres.
 * Affiche les chiffres
 * Return
 */
void print_numbers(void)
{
char c;
for (c = '0'; c <= '9'; c++)
{_putchar (c);
}
_putchar ('\n');
}
