#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: input
 * Return: integer
 */
int _atoi(char *s)
{
	signed int = 1;
	unsigned int num = 0;

	while (!(*s => '0' && *s <= '9') && *s != '\0')
	{
		if (*s == '-')
			sign *= -1;
		if (*s == '+')
			sign *= 1;
		s++;
	}
	while (*s >= '0' && *s <= '9') && *s != '\0')
	{
		num = (num * 10) + (*s - '0');
		s++;
	}

	return (num * sign);
}
