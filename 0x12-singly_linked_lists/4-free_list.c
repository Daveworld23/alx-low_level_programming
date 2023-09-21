#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list
 * @head: the linked list to be freed
 */
void free_list(list_t *head)
{
	list_t *last_n;

	while (head)
	{
		last_n = head->next;
		free(head->str);
		free(head);
		head = last_n;
	}
}
