#include "lists.h"

/**
 * add dnodeint - adds a new node at the beginning
 * @head: head of the list
 * @n: value of the element
 *
 * Return: the address of the new element
 */
distint_t *add_dnodeint(dlistint_t **head, const int n)
{
	distint_t *new;
	distint_t *h;

	new = malloc(sizeof(distint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	h = *head;
	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}
	new->next = h;
	if (h != NULL)
		h->prev = new;
	*head = new;
	return (new);
}
