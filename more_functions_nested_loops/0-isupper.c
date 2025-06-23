#include "main.h"
#include <stdio.h>
/**
 * function _isupper check if capital letters or not
 * @c is the letter to check
 * return 1 if 'c' is uppercase
 * return 0 if not
 */
int _isupper(int c)
{
if (c >= 65 && c < 91)
return (1);
else
return (0);
}
