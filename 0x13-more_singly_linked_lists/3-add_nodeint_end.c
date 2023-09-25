#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_nodeint_end - adds a new node at the end of a linked list
 * @head: double pointer to linked list
 * @n: pointer to new node string
 * Return: address of new element, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_n;
	listint_t *last_n = *head;

	new_n = malloc(sizeof(listint_t));
	if (!new_n)
		return (NULL);
	new_n->n = n;
	new_n->next = NULL;

	if (*head == NULL)
	{
		*head = new_n;
		return (new_n);
	}
	while (last_n->next)
		last_n = last_n->next;
	last_n->next = new_n;
	return (new_n);
}
