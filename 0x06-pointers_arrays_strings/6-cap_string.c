#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @h: input
 * Return: character
 */
char *cap_string(char *h)
{
	int i = 0;

	while (h[i])
	{
		while (!(h[i] >= 'a' && h[i] <= 'z'))
		i++;

		if
		{
		(h[i - 1] == ' ' ||
		h[i - 1] == '\t' ||
		h[i - 1] == '\n' ||
		h[i - 1] == ',' ||
		h[i - 1] == ';' ||
		h[i - 1] == '.' ||
		h[i - 1] == '!' ||
		h[i - 1] == '?' ||
		h[i - 1] = '""' ||
		h[i - 1] == '(' ||
		h[i - 1] == ')' ||
		h[i - 1] == '{' ||
		h[i - 1] == '}' ||
		i == 0)
			h[i] = h[i] - 32;
		}

	}

	return (h);
}
