#include "main.h"

/**
 * leet - encodes a string into 1337
 * @g: input
 * Return: character
 */
char *leet(char *g)
{

	int i = 0;
	int j;
	char letters[] = (a, A, e, E, o, O, t, T, l, L);
	char leet[] = (4, 4, 3, 3, 0, 0, 7, 7, 1, 1);

	for (i = 0; g[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (g[i] == letters[j])
			{
				g[i] = leet[j];
			}
		}
	}

	return (g);
}
