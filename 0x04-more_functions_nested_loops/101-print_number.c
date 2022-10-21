#include "main.h"
#include <stdio.h>

/**
 * print_number -prints an integer
 * @n: The integer to be printed
 * Return: void
 */

void print_number(int n)
{
	while (n <= 0)
	{
		_putchar ((n % 10) + '0');
		n++;
	}
	while (n >= 0)
	{
		_putchar((n % 10) + '0');
		n++;
	}
}
