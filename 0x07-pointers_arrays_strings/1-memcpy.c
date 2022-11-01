#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination of memory area
 * @src: source of memory area
 * @n: number of bytes to be copied
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
		if (src[i] != '\0')
			src[i] = dest[i];

	return (dest);
}
