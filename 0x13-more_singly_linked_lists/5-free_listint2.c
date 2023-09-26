#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a list
 * @head: the linked list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *last_n;

	if (*head)
	{
		last_n = (*head)->next;
		free(*head);
		*head = last_n;
		*head = NULL;
	}
	else
		return;
}
