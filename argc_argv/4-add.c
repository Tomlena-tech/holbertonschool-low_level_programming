#include <stdlib.h>
#include <stdio.h>
/**
 * - main add only positive number
 *@argc: number of argumnets
 *@argv array of argument strings
 *
 *return: 0 if success, 1 if error
 **/
int main(int argc, char *argv[])
{
int i, j, sum = 0;
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (argv[i][j] < '0' || argv[i][j] > '9')
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
