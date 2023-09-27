#include "lists.h"

/**
 * find_listint_loop - function thst finds the loop
 * @head: pointer to search for linked list
 * Return: adress where loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head;
	listint_t *fast = head;

	
