#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * print_numbers - prints numbers 0 to 9
 * Return: 0-9
 */
void print_numbers(void)
{
	int b;

	for (b = 0; b <= 9; b++)
	{
		_putchar(b + '0');
	}
		_putchar('\n');
}
