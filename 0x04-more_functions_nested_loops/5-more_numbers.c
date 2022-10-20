#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return: void
 */
void more_numbers(void)
{
	int d = 0;
	int q = 0;

	while (d < 10)
	{
		for (q = 0; q <= 14; q++)
		{
			if (q >= 10)
			{
				_putchar((q / 10) + '0');
			}
			_putchar((q % 10) + '0');
		}
		_putchar('\n');
	}
}
