#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_node - a function that adds a new node at the
 * beginning of a list_t list.
 * @str: An arg which needs to be duplicated
 * @head: A pointer to a pointer to list_t
 * Return: the address of the new element when succesful
 * or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *c;
	unsigned int len = 0;

	while (str[len])
		c++;
	c = malloc(sizeof(list_t));

	if (!c)
		printf("NULL");
	c->str = strdup(str);
	c->len = len;
	c->next = *head;
	*head = c;
	return (*head);
}
