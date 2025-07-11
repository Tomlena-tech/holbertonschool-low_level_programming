#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - Creates a new dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: A pointer to the new dog, or NULL if it fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *dog;
    int name_len, owner_len;
    int i = 0;

    if (name == NULL || owner == NULL)
        return (NULL);

    dog = malloc(sizeof(dog_t));
    if (dog == NULL)
        return (NULL);

    for (name_len = 0; name[name_len]; name_len++)
        ;
    for (owner_len = 0; owner[owner_len]; owner_len++)
        ;

    dog->name = malloc(name_len + 1);
    dog->owner = malloc(owner_len + 1);
    if (dog->name == NULL || dog->owner == NULL)
    {
        free(dog->name);
        free(dog->owner);
        free(dog);
        return (NULL);
    }

    for (; i < name_len; i++)
        dog->name[i] = name[i];
    dog->name[name_len] = '\0';

    for (; i < owner_len; i++)
        dog->owner[i] = owner[i];
    dog->owner[owner_len] = '\0';

    dog->age = age;

    return (dog);
}
