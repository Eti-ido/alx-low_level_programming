#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description - prints all single digit numbers of base 10 starting from 0
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 1;

	while (n <= 9)
	{
		printf("%d", n);
		n++;
	}
	{
		putchar('\n');
	}

	return (0);
}
