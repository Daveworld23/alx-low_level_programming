#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - function that prints a name
 * @name: the string added
 * @f: the function pointer
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	else if (f == NULL)
		return;
	f(name);
}
