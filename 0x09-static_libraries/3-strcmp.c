#include "main.h"
/**
 * _strcmp - compares string values
 * @s1: input value
 * @s2: input value
 *
 * Return: s1[a] - s2[b]
 */
int _strcmp(char *s1, char *s2)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (s1[a] != '\0' && s2[b] != '\0')
	{
		if (s1[a] != s2[b])
		{
			return (s1[a] - s2[b]);
		}
		a++;
		b++;
	}
	return (0);
}
