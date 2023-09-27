#include "lists.h"
#include <stdio.h>

size_t loop_len_listint(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * loop_len_listint - counts the length of list in a looo
 * @head: pointer to head node
 * Return: number of nodes, otherwise 0 if not looped
 */
size_t loop_len_listint(const listint_t *head)
{
	const listint_t *slow, *fast;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	slow = head->next;
	fast = (head->next)->next;
	while (fast)
	{
		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				nodes++;
				slow = slow->next;
				fast = fast->next;
			}
			slow = slow->next;
			while (slow != fast)
			{
				nodes++;
				slow = slow->next;
			}
			return (nodes);
		}
		slow = slow->next;
		fast = (fast->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - prints a linked list
 * @head: pointer to the head of the list
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = loop_len_listint(head);
	size_t index = 0;

	if (nodes == 0)
	{
		while (head != NULL)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			nodes++;
			head = head->next;
		}
	}
	else
	{
		while (index < nodes)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			index++;
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}
