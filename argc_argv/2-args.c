#include <stdio.h>
/**
 * - main: print all arguments received
 *@parameter argc arguments
 *@parameter argv character to print
 *
 *return (0)
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
printf("%s\n", argv[i]);
return (0);
}
