#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @h: input
 * Return: character
 */
char *cap_string(char *h)
{
	int i = 0;

	while (h[i] != '\0')
	{
		if (i == 0)
		{
			if (h[i] >= 'a' && h[i] <= 'z')
			{
				h[i] = h[i] - 32
				continue;
			}
		}
		if (h[i] == ' ')
		{
			i++;
			if (h[i] >= 'a' && h[i] <= 'z')
			{
				h[i] = h[i] - 32
				continue;
			}
		}
		else
		{
			if (h[i] >= 'A' && h[i] <= 'Z')
			{
				h[i] = h[i] + 32
			}
		}
		return (0);
}
