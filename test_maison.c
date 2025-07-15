#include <stdlib.h>
#include <stdio.h>

void Printhello(char *name)
{
printf("Hello %s\n", name);
}


 int Add(int a, int b)
    {return a+b;
    }
  
int main() 
{
void (*ptr)(char*);
ptr = Printhello;
ptr("Thomas");
}