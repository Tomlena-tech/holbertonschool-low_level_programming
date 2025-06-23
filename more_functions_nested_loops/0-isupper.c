#include "main.h"
#include <stdio.h>
/**
* _isupper - verifie si un caractere est une lettre majuscaule
* @c: caractere (int code ASCII) 
* description : teste sin c'est compris entre 'A' (65) et 'Z' (90), inclus
* return : 1 si c'est majuscule, 0 sinon.
*/
int _isupper(int c)
{
if (c >= 65 && c < 91)
return (1);
else
return (0);
}
