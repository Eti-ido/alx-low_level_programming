#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: string destination
 * @src: source of the string
 * @n: string length
 * Return: destination of the string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while ((dest[j] != '\0'))
	j++;

	while ((src[i] != '\0'))
	{
		dest[i + j] = src[i];
		i++;
		j++;
	}
	dest[i + j] = '\0';

	return (dest);
}
