#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @e: The number to be computed
 *
 *Return: the value of the last digit
 */
int print_last_digit(int e)
{
	int digit;

	digit = e % 10;

	if (digit < 0)
	{
		digit = digit * -1;
	}

	_putchar((e % 10) + '0');

	return (digit);
}
