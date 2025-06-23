#include "main.h"
#include <stdio.h>
/**
* _isdigit - verifie si un caractere est un chiffre
* @c: chiffre (int code ASCII)
* Description : teste si l entier est un chiffre ou pas (48) et (57)
* Return: 1 si c'est un chiffre, 0 non.
*/
int _isdigit(int c)
{
if (c >= 48 && c < 58)
return (1);
else
return (0);
}
