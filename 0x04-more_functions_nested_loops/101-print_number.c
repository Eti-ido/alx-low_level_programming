#include "main.h"
#include <stdio.h>

/**
 * print_number -prints an integer
 * @n: The integer to be printed
 * Return: void
 */

void print_number(int n)
{
	if (n != 0)
	{
		_putchar(n / 10);
		_putchar((n % 10) + '0');
	}

	else if (n == 0)
		putchar('0');

	else if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

}
