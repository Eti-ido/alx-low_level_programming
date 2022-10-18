#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int n = 0;
	char alpha = 'a';

	while (n < 10)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}

		_putchar('\n');
		n++;
	}
}
