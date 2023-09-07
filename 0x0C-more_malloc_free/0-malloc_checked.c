#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: size to allocate
 *
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == Null)
		exit(98);
	return (p);
}
