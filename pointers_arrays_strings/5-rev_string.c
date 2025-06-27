#include "main.h"
#include <stdio.h>
/**
 * rev_string - reverse string
 *@s: pointer to the string that will be reversed
 *
 *Return:(void)
 */
void rev_string(char *s)
{
int i = 0;
int len = 0;
char tmp;
while (s[len] != '\0')
len++;
len--;
while (i < len)
{
tmp = s[i];
s[i] = s[len];
s[len] = tmp;
i++;
len--;
}
}
