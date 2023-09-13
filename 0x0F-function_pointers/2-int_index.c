#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - function that searches for an int
 * returns index position if true
 * else -1 if false
 * @array: the array
 * @size: number of element in array
 * @cmp: pointer to function that compares
 *
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
