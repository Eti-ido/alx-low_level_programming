#include "main.h"

/**
 * print_square - prints a square
 * @size: size of the the sqaure
 * Return: void
 */

void print_square(int size)
{
	int col, row;

		for (col = 1; col <= size; col++)
		{
			for (row = 1; row <= 2 * size - 1; row++)
			{
				if (col >= size - (col - 1) && col <= size + (col - 1))
					_putchar('#');
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
}
