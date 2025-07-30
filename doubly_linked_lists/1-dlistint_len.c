#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
  * dlistint_len - Counts the number of elements in a doubly linked list.
  * @h: The double linked list 2 count.
  * Return: Number of elements in the doubly linked list.
  */
size_t dlistint_len(const dlistint_t *h)
{
	int taille = 0;

	while (h != NULL)
	{
		++taille;
		h = h->next;
	}

	return (taille);
}
