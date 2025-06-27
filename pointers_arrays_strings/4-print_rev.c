#include "main.h"
#include <stdio.h>
/**
 * print_rev print string in reverse side
 *@s: pointer to the string to orint in reverse
 *
 *
 *Return(void)
 */
void print_rev(char *s)
{
int len = 0;
int inde;
while (s[len] != '\0')
len++;
for (inde = len - 1; inde >= 0; inde--)
_putchar (s[inde]);
_putchar ('\n');
}
