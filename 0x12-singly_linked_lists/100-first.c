#include <stdio.h>

void new(void)__attribute__((constructor));

/**
 * new - prints a string before the main function is executed
 */
void new(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
