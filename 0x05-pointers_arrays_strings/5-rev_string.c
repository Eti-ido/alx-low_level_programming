#include "main.h"

/**
 * rev_string - reverses a string
 * @s: input
 * Return: void
 */
void rev_string(char *s)
{
	char re = s[0];
	int i = 0;
	int e;

	while (s[i] != '\0')
		i++;
	for (e = 0; e < i; e--)
	{
		i--;
		re = s[e];
		s[e] = s[i];
		s[i] = re;
	}
}
