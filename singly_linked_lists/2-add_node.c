#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: A pointer to the address of the head of the list_t list.
 * @str: The string to be added to the new node.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
    list_t *new_node;
    size_t str_len;

    new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
        return (NULL);

    str_len = 0;
    while (str[str_len] != '\0')
        str_len++;

    new_node->str = strdup(str);
    if (new_node->str == NULL)
    {
        free(new_node);
        return (NULL);
    }

    new_node->len = str_len;
    new_node->next = *head;
    *head = new_node;

    return (new_node);
}