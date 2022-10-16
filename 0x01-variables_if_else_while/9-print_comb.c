#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all possible combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar((n % 10) + '0');
		putchar(',');
		putchar(' ');
		n++;
	}
	{
		putchar('\n');
	}

	return (0);
}
