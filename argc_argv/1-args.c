#include <stdio.h>
/**
* main - prints number of arguments
*@argc: number of arguments
*@argv: array of arguments
*Return: 0                                                                                                      
*/
int main(int argc, char *argv[])
{
(void)argv;
printf("%d\n", argc - 1);
return (0);
}
