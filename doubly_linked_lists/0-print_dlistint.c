
#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 * @h: Pointer to the head of the doubly linked list.
 * Return: The number of nodes printed.
 */
size_t print_dlistint(const dlistint_t *h)
{
    size_t count = 0;

    while (h != NULL)
    {
        printf("%d\n", h->n);
        count++;
        h = h->next;
    }

    return (count);
}
