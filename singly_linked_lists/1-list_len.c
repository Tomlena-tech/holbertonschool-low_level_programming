#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * list_len - Returns the number of elements in a linked list
 * @h: A linked list.
 *
 * Return: The number of elements in the linked list
 */



size_t list_len(const list_t *h)
{
    size_t count = 0;

    while (h != NULL)
    {
        count++;
        h = h->next;
    }

    return (count);
}
