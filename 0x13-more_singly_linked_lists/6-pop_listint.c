#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of linked list
 * @head: point to pointer of linked list
 * Return: head node data(n), -1 if not present
 */
int pop_listint(listint_t **head)
{
	listint_t *last_n;
	int data;

	if (!head || !*head)
		return (-1);
	data = (*head)->n;
	last_n = *head;
	*head = (*head)->next;
	free(last_n);
	return (data);
}
