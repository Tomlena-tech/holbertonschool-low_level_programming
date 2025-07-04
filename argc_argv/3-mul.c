#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies 2 numbers passed as argumets
 *@argc: number of arguments
 *@argv: array of argument strings
 *
 *Return: 0 on success, 1 if error
 **/
int main(int argc, char *argv[])
{
int result;
int i = 0;
int j = 0;  
if (argc <= 2)
{
printf("Error\n");
return (1);
}
i = atoi(argv[1]);
j = atoi(argv[2]);
result = i * j;
printf("%d\n", result);
return (0);
}

