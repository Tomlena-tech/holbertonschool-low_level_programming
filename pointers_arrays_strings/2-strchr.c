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
for (index = 0; (s[index] != c) && (s[index] != '\0'); index++)
  ;
if (s[index] == c)
return (s + index);
else

return(NULL);
}
  
