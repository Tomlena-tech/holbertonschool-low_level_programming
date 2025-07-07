#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * _strdup - duplicates a string
 * @str: the string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL if it fails
 */

char *_strdup(char *_str)
{
    char *dup;
    int index, longueur_st;

    if (_str == NULL)
        return (NULL);

    for (longueur_st = 0; _str[longueur_st] != '\0'; longueur_st++)
        ;
    dup = malloc(sizeof(char) * (longueur_st + 1));
    if (dup == NULL)
        return (NULL);

    for (index = 0; index < longueur_st; index++)
        dup[index] = _str[index];
    
    dup[longueur_st] = '\0';    
    return (dup);
}
