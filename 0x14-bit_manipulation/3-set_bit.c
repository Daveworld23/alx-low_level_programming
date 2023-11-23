#include "main.c"

/**
 * set_bit - function that sets bit
 * @n: pointer to number to be set
 * @index: index of the set number
 * Return: 1 if success, -1 for error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set;

	if (index > (sizeof(unsigned long int) * 8 - 1))
	{
		return (-1);
	}
	set = 1 << index;
	*n = *n | set;
	return (1);
}
