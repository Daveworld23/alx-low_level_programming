#include "main.h"

/**
 * _memset - fill a block of memory with a specific value
 * @s: starting address of the memory to be filled
 * @b: the expected value
 * @n: number of bytes that is to be changed
 *
 * Return: changed array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}