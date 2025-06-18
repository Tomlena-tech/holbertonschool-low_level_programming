#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**                                                                                    
* main - Prints a text according number                                                
* Return: Always (Success)                                                             
*/
int main(void)
{
char x;
for(x = 'a'; x <= 'z'; x++)
putchar(x);
for(x = 'A'; x <= 'Z'; x++)
  putchar(x);  
return(0);
}
