#include "main.h"
#include <stdio.h>
/**
 * puts2 - print every character starting with the first
 *
 *
 *Return (void)
 */
void puts2(char *str)
{
int index = 0;
while (str[index] != '\0')
{
if (index % 2 == 0)
_putchar(str[index]);
index++;
}
_putchar('\n');
}






