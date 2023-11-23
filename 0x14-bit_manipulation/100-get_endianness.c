#include "main.h"

/**
 * get_endianness - function that checks for endianness
 *
 * Return: 0 for big endian, 1 for little endian
 */
int get_endianness(void)
{
	unsigned int a = 1;
	char *b = (char *)&a;

	if (*b == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
