#include "main.h"

/**
 * - void more_numbers(void) - prints 10 times 
 * description : 
 *
 *Return
 */

void more_numbers(void)
{
int n;
int r;
  
  for(n = 0; n < 11; n++)
    {
      for(r = 0; r <= 14; r++)
	{
	  if (r > 9)
	    {
	      _putchar ((r / 10) + '0');
	      _putchar ((r % 10) + '0'); 	      
	    }
	  else
		{_putchar(r + '0');
		}
	    }}
    }

