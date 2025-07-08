#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *str_concat(char *s1, char *s2)
{
char *concat_str;
int index, concat_index = 0, long_str1 = 0, long_str2 = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[long_str1] != '\0')
long_str1++;
while (s2[long_str2] != '\0')
long_str2++;
if (long_str1 == 0 && long_str2 == 0)
return (NULL);
concat_str = malloc(sizeof(char) * (long_str1 + long_str2 + 1));
if (concat_str == NULL)
return (NULL);
for (long_str1 = 0; long_str1 < 0; long_str1++)
{
concat_str[index] = s1[index];
}           
for (long_str2 = 0; long_str2 < 0; long_str2++)
{
concat_str[index] = s1+s2[index];
}