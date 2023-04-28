#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_node_end -  a function that adds a new node
 * at the end of a list_t list.
 * @str: Parameter needed to be duplicated
 * @head: THe beginning of a string
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *i;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;
	i = malloc(sizeof(list_t));
	if (!i)
		return (NULL);
	i->str = strdup(str);
	i->len = len;
	i->next = NULL;

	if (*head == NULL)
	{
		*head = i;
		return (i);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = i;
	return (i);
}
