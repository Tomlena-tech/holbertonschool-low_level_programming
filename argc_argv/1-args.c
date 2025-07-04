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
for (index = 0; index < argc; index++)
{
printf("%s\n", argv[index]);
}
return (0);
}

