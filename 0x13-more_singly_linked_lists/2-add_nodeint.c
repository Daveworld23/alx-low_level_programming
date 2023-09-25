#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_nodeint - function that adds a new node at the beginning of a list
 * @head: double pointer to the list
 * @n: integer value of new node
 * Return: address of new element, or Null if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_n;

	new_n = malloc(sizeof(listint_t));
	if (!new_n)
		return (NULL);
	new_n->n = n;
	new_n->next = *head;
	*head = new_n;

	return (new_n);
}
