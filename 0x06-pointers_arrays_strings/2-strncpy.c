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
	int j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}

	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
