#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 *
 *
 *
 **/

int main(int argc, char *argv[])
{
int result;
int i = 0;
int j = 0;  
if (argc <= 2)
{
printf("Error");
 return (1);
 }
   
i = atoi(argv[1]);
j = atoi(argv[2]);
 result = i * j;
 printf("%d\n", result);
 return (0);
 
}

