#include "main.h"

/**
 * print_binary - prints binary representation
 * @n: number to print
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int base;
	int bit, start = 0, num = 0;

	for (bit = sizeof(unsigned long int) * 8 - 1; bit >= 0; bit--)
	{
		base = 1UL << bit;
		if (n & base)
		{
			start = 1;
			_putchar('1');
			num++;
		}
		else if (start)
		{
			_putchar('0');
			num++;
		}
	}
	if (!num)
	{
		_putchar('0');
	}
}
