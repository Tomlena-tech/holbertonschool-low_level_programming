#include <stdio.h>
#include "main.h"
/**
 *_strcpy - copying string into a buffer including null byte
 *
 *@dest buffer
 *@src string to copy
 *Return : retourne at the beginning
 **/
char *_strcpy(char *dest, char *src)
{
char *_retourne = dest;
while ((*dest++ = *src++) != '\0')
{;
}
return _retourne;
}

