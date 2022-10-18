#include "main.h"

/**
 * print_alphabet - prints the alphaebtes in lowercase
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	char alpha = 'a';

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}

	_putchar('\n');

	return (0);
}
