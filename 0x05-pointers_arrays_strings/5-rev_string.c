#include "main.h"

/**
 * rev_string - reverses a string
 * @s: input
 * Return: void
 */
void rev_string(char *s)
{
	int c = 0;
	int i;

	while (s[c] != '\0')
		c++;
	for (i = 0; i < c; i++)
	{
		c--;
		result = s[i];
		s[i] = s[c];
	}
}
