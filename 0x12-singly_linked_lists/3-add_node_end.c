#include "list.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to linked list
 * @str: pointer to new node string
 * Return: address of new element, or NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_n;
	unsigned int len;
	list_t *last_n = *head;

	for (len = 0; str[len]; len++)
		;
	new_n = malloc(sizeof(list_t));
	if (!new_n)
		return (NULL);
	new_n->str = strdup(str);
	new_n->len = len;
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
