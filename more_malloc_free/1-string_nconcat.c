#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings up to n bytes of the second string
 * @s1: first string
 * @s2: second string
 * @n: number of bytes from s2 to concatenate
 * Return: pointer to the newly allocated space in memory containing the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *concat;
unsigned int len1 = 0, len2 = 0, i;
while (s1 && s1[len1])
len1++;
while (s2 && s2[len2])
len2++;
if (n >= len2)
n = len2;
concat = malloc(len1 + n + 1);
if (!concat)
return (NULL);
for (i = 0; i < len1; i++)
concat[i] = s1[i];
for (i = 0; i < n; i++)    
concat[len1 + i] = s2[i];
concat[len1 + n] = '\0';
return (concat);
}

