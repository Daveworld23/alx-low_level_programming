#include <stdio.h>

/**
 * main - A program that prints the alphabet in lowercase
 * Return: Always (Success0
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
