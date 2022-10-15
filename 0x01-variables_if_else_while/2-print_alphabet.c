#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	{
		putchar('\n');
	}

	return (0);
}
