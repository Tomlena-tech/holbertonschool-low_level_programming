#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * print_list - Prints all elements of a list
  * @h: Pointer at the begginging of the list    
  *
  * Return: The number of nodes
  */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		printf("[0] (nil)\n");
        else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	if (count == 0)
		printf("[0] (nil)\n");
	return (count);
}
