#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocate a memory
 * @ptr: former pointer of memory allocated by malloc
 * @old_size: old size allocated by malloc
 * @new_size: new size allocater by realloc
 *
 * Return: pointer to newly allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	size_t i, m = new_size;
	char *oldp = ptr;

	if (ptr == NULL)
	{
		p = malloc(new_size)
			return (p);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	p = malloc(new_size)
		if (p == NULL)
			return (NULL);
	if (new_size > old_size)
		m = old_size;
	for (i = 0; i < m; i++)
		p[i] = oldp[i];
	free(ptr);
	return (p);
}
