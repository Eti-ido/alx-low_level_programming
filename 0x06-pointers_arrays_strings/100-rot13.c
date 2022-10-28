#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @k: input
 * Return: character
 */
char *rot13(char *k)
{
	int i = 0;
	int j;
	char let[] = "ABCDEFGHIJKLMabcdefghijklm";
	char rot[] = "NOPQRSTUVWXYZnopqrstuvwxyz";

	for (i = 0; k[i] != '\0'; i++)
	{
		for (j = 0; j <= 'z' || j <= 'Z'; j++)
		{
			if (k[i] == let[i])
			{
				k[i] = rot[j];
			}
		}
	}

	return (k);
}
