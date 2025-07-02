#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */





int _strlen_recursion(char *s)
{
  int longeur_str = 0;
  
  while (*s != '\0')
    { longeur_str++;
      longeur_str += _strlen_recursion(s + 1);
    }
  return(longeur_str);



}
