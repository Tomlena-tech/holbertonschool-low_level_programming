#include "main.h"
#include <stdio.h>

/**
 * _strlen permet de mesurer la taille d'une chaine de caractere.
 *
 *
 *
 *
 *
 */

int _strlen(char *s)
{
int index = 0;
int count; 
for(count = 0; (s[count] != '\0'); count++);
index++;      
return(index); 
}
