#include <stdio.h>
#include "dog.h"
/** 
* print_dog - prints a struct dog
* @d pointer to the struct doog to print
*  Description: This function prints the name, age, and owner of a dog.
* if any firlds are missing  it prints (nil)
*/
void print_dog(struct dog *d)
{
if (d == NULL)
return;
if (d->name == NULL && d->owner == NULL)
{
printf("Name: (nil)\n");
printf("Age: %f\n", d->age);
printf("Owner: (nil)\n");
}
else if (d->name == NULL)
{
printf("Name: (nil)\n");
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner);
}
else if (d->owner == NULL)
{
printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
printf("Owner: (nil)\n");
}
else
{
printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner);
}
}
