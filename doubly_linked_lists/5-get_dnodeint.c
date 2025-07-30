#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to the head of the list
 * @index: index of the node to return
 * Return: the nth node of the list, or NULL if it does not exist
 * This function traverses the doubly linked list starting from the head,
 * counting nodes until it reaches the specified index.
 * If the index is out of bounds, it returns NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    unsigned int i = 0; /*compteur pour suivre la position actuelle*/
    dlistint_t *current = head;

    if (head == NULL)
        return (NULL);

    while (current != NULL)
    {
        if (i == index)
            return (current);
        current = current->next;
        i++;
    }
    return (NULL);
}