#include "list.h"
#include <stdlib.h>

/**
 * list_len - function that list the number of element
 * @h: pointer to the list_t list
 *
 * Return: Number of elments
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}

	return (n);
}
