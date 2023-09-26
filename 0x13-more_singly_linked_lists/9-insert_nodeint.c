#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at given position
 * @head: pointer to the first node
 * @idx: index where the new node should be added
 * @n: data to insert in node
 *
 * Return: address of new node, or Null
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_n;
	listint_t *last_n = *head;
	unsigned int i;

	if (!head)
		return (NULL);
	new_n = malloc(sizeof(listint_t));
	if (!new_n)
		return (NULL);
	new_n->n = n;
	new_n->next = NULL;
	if (idx == 0)
	{
		new_n->next = *head;
		*head = new_n;
		return (new_n);
	}
	for (i = 0; last_n && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new_n->next = last_n->next;
			last_n->next = new_n;
			return (new_n);
		}
		else
			last_n = last_n->next;
	}
	return (NULL);
}
