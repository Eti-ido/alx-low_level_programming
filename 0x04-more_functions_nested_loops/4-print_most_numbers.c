#include "main.h"

/**
 * print_most_numbers - prints numbers except 2 and 4
 * Return: void
 */
void print_most_numbers(void)
{
	int z = 0;

	while (z < 10)
	{
		if (z != 2 && z != 4)
		{
			_putchar((z % 10) + '0');
		}
	}
	_putchar('\n');
}
