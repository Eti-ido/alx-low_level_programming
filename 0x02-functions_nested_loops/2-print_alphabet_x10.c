#include "main.h"

/**
 * main - prints 10 times the alphabet in lowercase
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int n = 0;

	while (n < 10)
	{
		_putchar('abcdefghijklmnopqrstuvwxyz\n');
		n++
	}
	_putchar('\n');
}
