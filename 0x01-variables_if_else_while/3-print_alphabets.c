#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: Always ) (SUCCESS)
 */

int main(void)
{
	char ch = 'a';
	char CH = 'A';

		while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
		while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	{
		putchar('\n');
	}

	return (0);
}
