#include <stdio.h>
#include "dog.h"
/**
 * 
 */
void print_dog(struct dog *d)
{
    if (d == NULL)
    {
printf("nil\n");
        return;
    }
else if (d->name == NULL)   
{
    printf("Name: (nil)");
    return;
}
    printf("Name: %s\n", d->name);
    printf("Age: %.6f\n", d->age);
    
    if (d->owner == NULL)
        printf("Owner: (nil)\n");
    else
        printf("Owner: %s\n", d->owner);

    return;
}
