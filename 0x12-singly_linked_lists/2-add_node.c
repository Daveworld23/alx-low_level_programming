#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - function that adds a new node at the beginning of a list
 * @head: double pointer to the list
 * @str: new string to add to the node
 * Return: address of new element, or Null if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_n;
	unsigned int len;

	for (len = 0; str[len]; len++)
		;
	new_n = malloc(sizeof(list_t));
	if (!new_n)
		return (NULL);
	new_n->str = strdup(str);
	new_n->len = len;
	new_n->next = (*head);
	(*head) = new_n;

	return (*head);
}
