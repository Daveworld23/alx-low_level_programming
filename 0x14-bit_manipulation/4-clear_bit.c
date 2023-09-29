#include "main.h"

/**
 * clear_bit - function that set a bit to 0 at an index
 * @n: pointer to value to be set
 * @index: index to set value
 *
 * Return: 1 for success, -1 for error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(*n) * 8))
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
