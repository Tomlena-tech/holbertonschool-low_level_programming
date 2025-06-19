#include <stdio.h>
#include <stdlib.h>
/**                                                                                                      
* main - Prints letters                                                                                  
* Return: Always0(Success)                                                                               
*/
int main(void)
{
  int numbers; int letters;
for (numbers = 0; numbers <=9; numbers ++)
{
putchar(numbers);
}
 for (letters = 'A'; letters > 'G'; letters ++)
   {putchar (letters);
   }
putchar('\n');
return (0);
}
