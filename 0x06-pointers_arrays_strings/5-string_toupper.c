#include "main.h"

/**
 * string_toupper - changes all lowercase to uppercase
 * @f: pointer to character
 * Return: character
 */
char *string_toupper(char *f)
{
	int i = 0;

	while (f[i] != '\0')
	{
		if (f[i] >= 'a' && f[i] <= 'z')
			f[i] = f[i] - 32;
		i++;
	}
	return (f);
}
