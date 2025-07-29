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
void free_listint(list_t *head);
int check_cycle(list_t *list);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);


#endif /* LISTS_H */
