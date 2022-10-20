#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100
 * muliples of 3 print Fizz
 * multiples of 5 print Buzz
 * multiples of 3 and 5 print FizzBuzz
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;
	char g[] = "Fizz";
	char d[] = "Buzz";
	char e[] = "FizzBuzz";

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0)
		{
			printf("%s ", g);
		}
		else if (a % 5 == 0)
		{
			printf("%s ", d);
		}
		else if ((a % 3 == 0) && (a % 5 == 0))
		{
			printf("%s ", e);
		}
		else
			printf("%d ", a);
	}

	printf("\n");

	return (0);
}
