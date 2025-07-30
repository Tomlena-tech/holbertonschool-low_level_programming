#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - calculates the sum of all the data (n) in a dlistint_t list
 * @head: pointer to the head of the doubly linked list
 */
int sum_dlistint(dlistint_t *head)
{
int sum = 0;
if (head == NULL)
return(0);
while (head != NULL)
{sum = sum + head ->n;
    head = head->next;
}
return(sum);
}
