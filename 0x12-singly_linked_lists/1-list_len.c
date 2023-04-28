#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - a function that returns the number of elements
 * in a linked list_t list.
 * @h: head of the list
 * Return: returns the number of elements in a linked list_t list.
 */

size_t list_len(const list_t *h)
{
	size_t d = 0;

	while (h)
	{
		d++;
		h = h->next;
	}
	return (d);
}
