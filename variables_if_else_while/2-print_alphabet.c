#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 * main - Prints a text according number                                              
 *                                                                                   
 * Return: Always (Success)                                                           
 */
int main(void)
{
char alphabet = 'a';

while (alphabet <= 'z')
{
putchar(alphabet);

alphabet++;
}
putchar('\n');
return (0);
}
