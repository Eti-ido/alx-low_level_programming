# include <stdio.h>

/**
 * main - Prints the size of various types
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;


	printf("Size of char=%i bytes\n", sizeof(a));
	printf("Size of int=%i bytes\n", sizeof(b));
	printf("Size of long int=%i bytes\n", sizeof(c));
	printf("Size of long long int=%i bytes\n", sizeof(d));
	printf("Size of float int=%i bytes\n", sizeof(e));
	return (0);
}