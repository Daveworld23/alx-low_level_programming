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
	while (last_n)
	{
		sum += last_n->n;
		last_n = last_n->next;
	}
	return (sum);
}
