
#ifndef LISTS_H

#define LISTS_H

#include <stdlib.h>
/**
 * struct list_s - singly   linked   list.
 *
 * @str: string - malloc string.
 *
 * @lens: length of string.
 *
 * @next: point to next node
 *
 * Descript:singly linked list node structure.
 */
typedef struct list_s

{
	char *str;
	unsigned int lens;
	struct list_s *next;
}
list_t;

void free_list(list_t *head);

list_t *add_node(list_t **head, const char *str);
size_t print_list(const list_t *h);

list_t *add_node_end(list_t **head, const char *str);

size_t list_len(const list_t *h);
#endif
