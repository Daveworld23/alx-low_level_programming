#include "lists.h"
#include <stdlib.h>

/**
 * listint_len - lists the number of element in a linked list
 * @h: pointer to the list node
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}

	return (n);
}
