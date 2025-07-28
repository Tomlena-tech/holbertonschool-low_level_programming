#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string   
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
	char *str; /* String data */
    unsigned int len; /* Length of the string */
	struct listint_s *next;
} list_t;

size_t print_list(const list_t *h);
list_t *add_nodeint(list_t **head, const int n);
void free_listint(list_t *head);
int check_cycle(list_t *list);

#endif /* LISTS_H */
