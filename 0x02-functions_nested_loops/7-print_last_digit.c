#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @e: The number to be computed
 *
 *Return: the value of the last digit
 */
int print_last_digit(int e)
{
	if (e < 0)
		e = e * -1;
	_putchar((e % 10) + '0');
	return (e % 10);
}
