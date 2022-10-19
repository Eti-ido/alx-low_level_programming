#include <stdio.h>
#include "main.h"

/**
 * main - prints the first 50 Fibonacci numbers
 * Return: void
 */
int main(void)
{
	unsigned long numb a, b, c;

	a = 1;
	b = 2;
	for (numb = 0; numb <= 50; numb++)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%lu", c);
		if (numb == 50)
			putchar('\n');
		else
		{
			printf(", ");
		}
	}
	return (0);
}
