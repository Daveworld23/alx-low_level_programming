#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to node
 * Description: function frees a list with a loop that goes through
 * the list once and sets the head to NULL
 * Return: size of freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	listint_t *last_n;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		if (*h > (*h)->next)
		{
			last_n = (*h)->next;
			free(*h);
			*h = last_n;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}
	*h = NULL;
	return (len);
}
