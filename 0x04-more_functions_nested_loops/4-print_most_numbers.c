#include "main.h"

/**
 * print_most_numbers - prints numbers except 2 and 4
 * Return: void
 */
void print_most_numbers(void)
{
	char z = '0';

	while (z <= '9')
	{
		if ((z != '2') && (z != '4'))
		{
			_putchar(z);
		}
	}
	_putchar('\n');
}
