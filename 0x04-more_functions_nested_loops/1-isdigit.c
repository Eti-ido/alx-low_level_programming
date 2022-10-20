#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: The int for the paracmeter of my function
 * Return: 0 or 1
 */
int _isdigit(int c);
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
