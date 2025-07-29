#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"      
/**
 * free_list - Frees a list
 * @head: Pointer to the head of the list
 *
 * Return: Nothing
 */
void free_list(list_t *head)
{
    list_t *temp;
    while (head != NULL)
    {
        temp = head;
        head = head->next;
        free(temp->str);  // Free the string data
        free(temp);       // Free the node itself
    }
}
