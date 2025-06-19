#include <stdio.h>
#include <stdlib.h>
/**
* main - Prints letters
* Return: Always0(Success)
*/
int main(void)
{
char letters;
for (letters = 'z'; letters >= 'a'; --letters)
{
putchar(letters);
}
putchar('\n');
return (0);
}
