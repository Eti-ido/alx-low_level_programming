#include "main.h"

/**
 * add - adds two integers
 * @e: First number
 * @f: Second number
 * Return: Sum of e and f
 */
int add(int e, int f)
{
	int sum;

	sum = e + f;
	{
		_printchar((sum % 10) + '0');
	}

	return (sum);
}
