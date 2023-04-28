#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_list -  a function that frees a list_t list.
 * @head: The head of the list to be freed.
 *Return: Is void.
 */

void free_list(list_t *head)
{
	list_t *tempo;

	while (head)
	{
		tempo = head->next;
		free(head->str);
		free(head);
		head = tempo;
	}
}
