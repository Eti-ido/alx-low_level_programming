#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 * Description = prints a string in reverse
 * Return: Always 0 (Success)
 */

int main(void)
{
	char str;

	for (str = 'z'; str >= 'a'; str--)
	{
		putchar(str);
	}
	{
		putchar('\n');
	}

	return (0);
}
