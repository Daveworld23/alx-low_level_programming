#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes node at index
 * @head: pointer to the node that is to be deleted
 * @index: index of deleted node
 * Return: 1 if succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *last_n = *head;
	listint_t *curr = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(last_n);
		return (1);
	}
	while (i < index - 1)
	{
		if (last_n == NULL || last_n->next == NULL)
			return (-1);
		last_n = last_n->next;
		i++;
	}
	curr = last_n->next;
	last_n->next = curr->next;
	free(curr);
	return (1);
}
