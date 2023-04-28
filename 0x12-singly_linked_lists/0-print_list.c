#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list -  a function that prints all the elements of a list_t list.
 * @h: This is a parameter of the function
 *
 * Return: Returns the number of nodes if the string isn`t empty
 * and if it is, it returns null
 */

size_t print_list(const list_t *h)
{
	size_t v = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		v++;
	}
	return (v);
}
