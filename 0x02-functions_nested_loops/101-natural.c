#include "main.h"
#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples of 3 or 5
 *
 * Return: Sum of multiples
 */
int main(void)
{
	int numb, sum;

	for (numb = 0; numb < 1024; numb++)
		if (numb % 3 == 0 || numb % 5 == 0)
		{
			sum += numb;
		}
	printf("%d\n", sum);

	return (0);
}
