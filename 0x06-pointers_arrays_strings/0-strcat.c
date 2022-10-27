#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination of the string
 * @src: source of the string
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;

	while ((src[i] = '\0'))
	i++;
	dest[i] = src[i];

	while ((src[i] != '\0'))
	i++;
	dest[i] = src[i];

	return (dest);
}
