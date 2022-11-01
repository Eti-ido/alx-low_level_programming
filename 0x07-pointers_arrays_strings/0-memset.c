#include "main.h"

/**
 * _memset - fills the memory with a constant byte
 * @s: pointer to the character
 * @b: value to be filled
 * @n: number of bytes to be filled
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
