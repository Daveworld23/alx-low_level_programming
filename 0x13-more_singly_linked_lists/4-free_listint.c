#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a list
 * @head: the linked list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *last_n;

	while (head)
	{
		last_n = head->next;
		free(head);
		head = last_n;
	}
}
