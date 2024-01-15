#include "lists.h"

/**
 * print_dlistint - prints all the elmement in a list
 * @h: head of the list
 *
 * Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int num = 0;

	if (h == NULL)
		return (num);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	return (num)
}
