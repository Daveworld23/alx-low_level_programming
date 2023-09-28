#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: pointer to a string containing binary numbers
 * Return: the converted number, or 0 if there is error
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int i;

	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		n <<= 1;
		if (b[i] == '1')
			n += 1;
	}
	return (n);
}
