#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
  * free_dlistint - Free a doubly linked list.
  * @head: The head of the doubly linked list.
  * Return: Nothing.
  */
 void free_dlistint(dlistint_t *head)
 { dlistint_t *temp;

   while (head)
   {
       temp = head;
       head = head->next;
       free(temp);
   }
    head = NULL;    
    return;
 }

