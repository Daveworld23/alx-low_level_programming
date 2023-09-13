#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes function on each element of array
 * @array: the array
 * @size: size of array
 * @action: pointer to function
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int f;

	if (array == NULL || action == NULL)
		return;
	for (f = 0; f < size; f++)
	{
		action(array[f]);
	}
}
