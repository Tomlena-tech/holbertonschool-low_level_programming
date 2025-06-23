#include "main.h"
#include <stdio.h>
/**
 * _isupper check capital letters or not
 * @c is the letter to check
 * return 0 or 1
 */
int _isupper(int c)
{
if (c >= 65 && c < 91)
return (1);
else
return (0);
}
