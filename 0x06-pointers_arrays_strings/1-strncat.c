#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: string destination
 * @src: source of the string
 * @n: number of char to be copied
 * Return: destination of the string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[j] != '\0')
	j++;

	while (i < n && src[i] != '\0')
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';

	return (dest);
}
