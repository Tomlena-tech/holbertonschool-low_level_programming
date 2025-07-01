#include "main.h"
#include <stddef.h>
/**
*_strstr - The _strstr() function finds the first occurrence
* of the substring needle in the string haystack.
* The terminating null bytes (\0) are not compared
*@haystack: string where the search is made
*@needle: string whose occurence is searched in haystack
*Return:Returns a pointer to the beginning of the located
* substring, or NULL if the substring is not found.
*/

char *_strstr(char *haystack, char *needle)
{
  int index = 0;
if (*needle == '\0')
return (haystack);
while (*haystack)
{
(index = 0);
while (haystack[index] == needle[index] && needle[index] != '\0')
index++;
if (needle[index] == '\0')
return(haystack);
haystack++;
}
return (NULL);
}	 
