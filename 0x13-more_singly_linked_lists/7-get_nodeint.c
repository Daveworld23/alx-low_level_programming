#include "lists.h"

/**
 * get_nodeint_at_index - gets a node using its index
 * @head: pointer to first node in list
 * @index: index of the node to return
 * Return: nth node of list, or Null if it doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *last_n = head;
	unsigned int i = 0;

	if (!head || !index)
		return (NULL);
	while (last_n && i < index)
	{
		last_n = last_n->next;
		i++;
	}
	return (last_n);
}
