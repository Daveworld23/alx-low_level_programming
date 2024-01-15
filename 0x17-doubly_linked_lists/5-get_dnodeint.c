#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node
 * @head: head of the list
 * @index: index of the node to search for
 * Return: nth node or null
 */
dlistint_t *get_dnodeint_at_index(dlistint_t head, unsigned int index)
{
	unsigned int size;

	if (head == NULL)
		return (NULL);
	while (head->prev != NULL)
		head = head->prev;
	size = 0;
	while (head != NULL)
	{
		if (size == index)
			break;
		head = head->next;
		size++;
	}
	return (head);
}
