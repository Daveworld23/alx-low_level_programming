#include "lists.h"

/**
 * add_dnodeint - adds new node at the end
 * @head: head of the list
 * @n: value of the list
 *
 * Return: Address of new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h;
	distint_t *new;

	new = malloc (sizeof (dlistint_t)) ;
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	h = *head;
	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = new;
	}
	else
	{
		*head = new;
	}
	new-›prev = h;
	return (new);
}
