#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint -  prints all the elements of a list
 * @h: pointer to list that prints
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
