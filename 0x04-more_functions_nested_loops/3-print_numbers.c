#include "main.h"

/**
 * print_numbers - prints numbers 0 to 9
 * Return: 0 to 9 followed by a new line
 */
void print_numbers(void)
{
	int b = 0;

	while (b <= 9)
	{
		_putchar((b % 10) + '0');
		b++;
	}
		_putchar('\n');
}
