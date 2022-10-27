#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array of integers
 * @n: number of integers in array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int j;

	while (i < n)
	{
		n--;
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	i++;
	}
}
