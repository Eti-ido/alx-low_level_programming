#include <stdio.h>
#include <unistd.h>

/**
 * main - prints _putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	write(2, "_putchar\n", 10);

	return (0);
}
