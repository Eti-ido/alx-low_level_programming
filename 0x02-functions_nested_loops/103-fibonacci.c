#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints the sum of the even numbers of Fibonacci
 * Return: Nothing
 */
int main(void)
{
	unsigned long numb, a, b, c, sum;

	a = sum = 0;
	b = 1;

	for (numb = 0; numb < 50; numb++)
	{
		c = a + b;
		a = b;
		b = c;

		if (c % 2 == 0 && c < 4000000)
		{
			sum += c;
		}
	}
	printf("%lu\n", sum);
	return (0);
}
