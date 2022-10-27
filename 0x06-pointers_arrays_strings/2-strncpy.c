#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination of the string
 * @src: string source
 * @n: number of character to be copied
 * Return: destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	i++;

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
