#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;

printf("%d \n", n);
{
int y;	
y = n % 10;
printf("The last digit of %d is %d \n", n, y);
 if (y > 5)
   printf("and is greter than 5"\n,)
   else if (y = 0)
     printf("and is 0"\n)
     else
       printf("and is less than 6 and not 0")
return (0);
}
