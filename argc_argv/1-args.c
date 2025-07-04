#include <stdio.h>
/**                                                                                                             
* main - prints program name                                                                                    
*@argc: number of arguments                                                                                     
*@argv: array of arguments                                                                                      
*Return: 0                                                                                                      
*/
int main(int argc, char *argv[])
{
int index;
 (void)argv;
for (index = 0; index < argc; index++)
{
printf("%d\n", argc);
}
return (0);
}

