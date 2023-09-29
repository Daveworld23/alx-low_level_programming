#include "main.h"

/**
 * get_bit - function that gets the value of a bit via index
 * @n: value to check bit
 * @index: index to check bit
 *
 * Return: value of bit at index, otherwise -1 if error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int base, check;

	for (; index > (sizeof(unsigned long int) * 8 - 1); index++)
		return (-1);
	base = 1 << index;
	check = n & base;
	if (check == base)
		return (1);
	return (0);
}
