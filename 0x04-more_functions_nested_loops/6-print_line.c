#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of time the character _ should be printed
 * Return: void
 */
void print_line(int n)
{
	int l = 0;

	for (l = 1; l <= n; l++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		_putchar('_');
	}
	_putchar('\n');
}
