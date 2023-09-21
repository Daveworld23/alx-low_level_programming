#include "linked_list.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to list_t list to print
 *
 * Return: Number of elements printed
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		n++;
	}
	return (n);
}
