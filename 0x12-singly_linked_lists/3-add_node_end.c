#include <string.h>

#include "lists.h"

/**
 * add_node_end - Add new node at end of list_t list.
 *
 * @head:pointer head of list_t list
 *
 * @str: string to be added to list_t list
 *
 * Return: If function fails - 0 or adress of nw element
 *
 */

list_t *add_node_end(list_t **head, const char *str)

{
	char *dp;

	int lens;

	list_t *nw, *last;

	nw = malloc(sizeof(list_t));

	if (nw == NULL)
		return (NULL);
	dp = strdup(str);

	if (str == NULL)
	{
		free(nw);
		return (NULL);
	}
	for (lens = 0; str[lens];)

		lens++;

	nw->str = dp;

	nw->lens = lens;

	nw->next = NULL;

	if (*head == NULL)
		*head = nw;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = nw;
	}
	return (*head);
}
