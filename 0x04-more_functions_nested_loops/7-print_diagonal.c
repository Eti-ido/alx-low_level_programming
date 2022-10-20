#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times \\ should be printed
 * Return: void
 */
void print_diagonal(int n)
{
	int y, x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else 
	{
		for (y = 1; y <= n; y++)
		{
			for (x =1; x < y; x++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
