#include "main.h"
#include <stdio.h>

/**
 * 
 *
 * Return: 
 */

char *_strchr(char *s, char c)
{

  int index;
  while (s[index] != 'c' && s[index] < '\0')
    index++;
  if (s[index] == 'c')
	return (s + index);






}
