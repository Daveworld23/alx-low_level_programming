#include "main.h"

/**
 * flip_bits - flips from one bit to another
 * @n: first number to flip
 * @m: second number to flip to
 * Return: number of flipped bits
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
