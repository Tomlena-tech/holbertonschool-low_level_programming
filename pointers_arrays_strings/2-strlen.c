#include "main.h"
#include <stdio.h>
/**
 * _strlen -  mesure la taille d'une chaine de caractere.
 *@s : pointe vers la string avant le nul
 *
 *Retourne le nombre de carateres
 *
 *
 */
int _strlen(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{}
return (i);
}
