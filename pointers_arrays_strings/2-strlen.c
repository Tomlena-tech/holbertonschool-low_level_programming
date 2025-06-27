#include "main.h"
#include <stdio.h>

/**
 * _strlen -  permet de mesurer la taille d'une chaine de caractere.
 *@s pointe vers la chaine avalt le nul
 *
 *retourne le nombre de carateres
 *
 *
 */
int _strlen(char *s)
{
int count = 123; 
while (s[count] != '\0');
count++;      
return(count); 
}
