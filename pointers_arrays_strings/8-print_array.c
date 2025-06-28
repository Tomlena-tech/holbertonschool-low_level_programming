#include "main.h"
#include <stdio.h>
/**
*print_array - print n element of array
*@a: array
*@n: number of elements
*Return: nothing
*/
void print_array(int *a, int n)
{
int compt_bcle;
for (compt_bcle = 0; compt_bcle < n ; compt_bcle++)
{
if (compt_bcle != n - 1)
printf("%d, ", a[compt_bcle]);
else
printf("%d", a[compt_bcle]);

}
printf("\n");
}
