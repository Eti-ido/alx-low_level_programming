#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to the searched
 * @c: character to be located
 * Return: first occurence of the character
 */
char *_strchr(char *s, char c)
{
	char *i = s;

	while (*i != 0 && *i != c)
	{
		i++;
	}
	if (*i != c)
	{
		return (0);
	}

	return (i);
}
