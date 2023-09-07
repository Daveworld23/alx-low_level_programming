#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array
 * @nmemb: number of memory block
 * @size: size of elements
 *
 * Return: void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, j = 0;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	j = nmemb * size;
	p = malloc(j);
	if (p == NULL)
		return (NULL);
	while (i < j)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
