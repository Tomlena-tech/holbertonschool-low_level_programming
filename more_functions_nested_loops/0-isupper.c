#include "main.h"
#include <stdio.h>
/**
 * _isupper - checking uppercase letters
* @c : character to check
* return: 1 if it's uppercase, 0 it's lowercase.
*/
int _isupper(int c)
{
if (c >= 65 && c < 91)
return (1);
else
return (0);
}
