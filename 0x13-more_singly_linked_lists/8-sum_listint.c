#include "lists.h"

/**
 * sum_listint - sums all the data of a linked list
 * @h: pointer to the node
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	listint_t *last_n = head;
	int sum = 0;

	if (head == NULL)
		return (0);
	for (; last_n != NULL; last_n = last_n->next)
	{
		sum += last_n->n;
	}
	return (sum);
}
