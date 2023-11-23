#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: pointer to string of binary number
 * Return: converted string or 0 for error
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int i;

	if (!b)
	{
		return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
		{
			n <<= 1;
		}
		else if (b[i] == '1')
		{
			n <<= 1;
			n |= 1;
		}
		else
		{
			return (0);
		}
	}
	return (n);
}
