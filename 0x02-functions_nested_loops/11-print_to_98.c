#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: The number to starting from to 98
 *
 * Return: void
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = 0; n < 98; n++)
		{
			printf("%d, ", n);
			printf("%d\n", 98);
		}
	else
	{
		for (n = 0; n > 98; n--)
			printf("%d, ", n);
			printf("%d\n", 98);
	}
}
