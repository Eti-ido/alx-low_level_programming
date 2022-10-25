#include "main.h"
#include <stdio.h>

/**
 * print_array - prints an array of integers
 * @a: pointer
 * @n: number of elements
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;
	*a = &n;

	for (i = 0; i < n; i++)
	{
		printf("a%d = %d, ", n, i);
	}

	printf("\n"');
}
