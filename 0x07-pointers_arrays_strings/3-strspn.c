#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be scanned
 * @accept: string containing list of characters to be matched
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int n = 0;
	int p = 0;
	int q = 0;

	for (n = 0; s[n] != 0; n++)
	{
		for (p = 0; accept[p] != 0; p++)
		{
			if (s[n] == accept[p])
			{
				q = 1;
			}
		}
		if (q == 0)
		{
			break;
		}
	}

	return (n);
}
