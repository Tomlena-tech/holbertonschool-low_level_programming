#include "main.h"
#include <stdio.h>
/**
 *swap_int switch value of a & b
 *@a: 1er integer
 *@b: 2nd integer
 *
 *return(nothing)
 */
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
