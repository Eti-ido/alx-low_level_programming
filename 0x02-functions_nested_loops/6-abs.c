#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @c: The number to be computed
 *
 * Return: Absolute value of number or 0
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;

		return (abs_val);
	}
	else if (c > 0)
	{
		int abs_val1;

		abs_val1 = c;

		return (abs_val1);
	}

	return (0);
}
