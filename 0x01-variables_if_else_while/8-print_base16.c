#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the numbers in base 16
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 0;
	char b = 'a';

	while (n <= 9)
	{
		putchar((n % 10) + '0');
		n++;
	}
	while (b <= 'f')
	{
		putchar(b);
		b++;
	}
	{
		putchar('\n');
	}

	return (0);
}
