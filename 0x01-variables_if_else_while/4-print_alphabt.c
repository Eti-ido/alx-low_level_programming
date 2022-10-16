#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Decription - a program that prints the alphabet in lowercase
 * Return: ALways 0 (SUCCESS)
 */

int main(void)
{
	char ch = 'a';

		for (ch = 'a'; ch <= 'z'; ch++)
			if (ch != 'e' && ch != 'q')
			{
				putchar(ch);
			}
		{
			putchar('\n');
		}

		return (0);
		}
