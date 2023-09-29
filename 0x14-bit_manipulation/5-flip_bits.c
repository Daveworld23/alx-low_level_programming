#include "main.h"

/**
 * flip_bits - Returns the number of bits you woukd flip
 * to get from one number to another
 * @n: first number to flip from
 * @m: second number to flip to
 *
 * Return: number of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;
	unsigned long int diff = n ^ m;

	while (diff)
	{
		diff &= (diff - 1);
		count++;
	}
	return (count);
}
