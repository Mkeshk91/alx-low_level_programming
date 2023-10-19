
#include <stdlib.h>

#include "lists.h"
/**
 * free_list - Free list_t list
 *
 * @head:pointer to list_t list
 *
 */

void free_list(list_t *head)

{
	list_t *tmps;

	while (head)

	{
		tmps = head->next;

		free(head->str);

		free(head);
		head = tmp;
	}
}
