#include <stdio.h>

/**
 * main - Entry point
 * Description - prints all the numbers of base 16 in lowercase
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = '0';
	char b = 'a';

	for (n = '0'; n <= '9'; n++)
	{
		putchar((n % 10) + '0');
	}
	for (b = 'a'; b <= 'f'; b++)
	{
		putchar(b);
	}
	{
		putchar('\n');
	}

	return (0);
}
