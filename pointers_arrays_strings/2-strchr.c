#include "main.h"
#include <stdio.h>

/**
 * _strchr cherche un caractere dans une chaine
 *@s: pointeur de la chaine dans laquelle on cherche
 *@c: caractere recherche
 *Return: pointe a l'endroit de c ou null  
 */

char *_strchr(char *s, char c)
{

  int index = 0;
  while (s[index] != '\0')
    {
  if (s[index] == c)
	return (s + index);
  index++;
}
  if (s[index] == '\0')
     return (s + index);

  return(NULL);
}
  
