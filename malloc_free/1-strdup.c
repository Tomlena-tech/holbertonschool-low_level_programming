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
    int i, len;

    if (_str == NULL)
        return (NULL);

    for (len = 0; _str[len] != '\0'; len++)
        ;
    dup = malloc(sizeof(char) * (len + 1));
    if (dup == NULL)
        return (NULL);

    for (i = 0; i < len; i++)
        dup[i] = _str[i];
    
    dup[len] = '\0';    
    return (dup);
}
