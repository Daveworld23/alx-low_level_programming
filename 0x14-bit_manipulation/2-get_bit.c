#include "main.h"

/**
 * get_bit - function that gets a binary number
 * @n: value to check for bit
 * @index: insex to check for bit
 * Return: value of bit at undex, otherwise -1 if empty
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int base, check;

	for (; index > (sizeof(unsigned long int) * 8 - 1); index++)
	{
		return (-1);
	}
	base = 1 << index;
	check = n & base;
	if (check == base)
	{
		return (1);
	}
	return (0);
}
