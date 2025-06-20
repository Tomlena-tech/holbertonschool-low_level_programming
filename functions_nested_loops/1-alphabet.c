#include "main.h"
/**
* main - check the code
* Return: Always 0.
* cette fonction imprime les lettres de l'alphabet dans l'ordre .*/
void print_alphabet(void) 
{char letter = 'a';
while (letter <= 'z')
{_putchar(letter);
letter++;
}
_putchar('\n');
}
