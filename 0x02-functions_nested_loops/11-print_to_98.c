#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: The character to be computed
 *
 * Return: void
 */
void print_to_98(int n)
{
	while (n <= 98)
	{
		_putchar((n % 10) + '0');
		_putchar(',');
		_putchar(' ');
	}
		n++
}
