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

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i + j] = src[i];
	}
	dest[i + j] = '\0';

	return (dest);
}
