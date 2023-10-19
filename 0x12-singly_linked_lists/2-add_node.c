#include <string.h>

#include "lists.h"

/**
 * add_node - Add new node at beginning of list_t list
 *
 * @head:pointer to head of list_t list.
 *
 * @str:string to be added t list_t list.
 *
 * Return: If function fails -0 or adress of nw element
 */
list_t *add_node(list_t **head, const char *str)

{
	char *dp;

	int len;

	list_t *nw;

	nw = malloc(sizeof(list_t));

	if (nw == NULL)
		return (NULL);

	dp = strdup(str);

	if (dp == NULL)
	{
		free(nw);

		return (NULL);
	}
	for (len = 0; str[len];)

		len++;
	nw->str = dp;

	nw->len = len;

	nw->next = *head;

	*head = nw;

	return (nw);
}
