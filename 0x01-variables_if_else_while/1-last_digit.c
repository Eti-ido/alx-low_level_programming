#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Entry point
 *Descripton - script to print last digit
 *Result - Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Enter a n: ");
	scanf("%d", &n);

	n = n % 10;
	printf("Last digit: %d", n);
	if (n > 5)
	{
		printf("Last digit of n is %d and is greater than 5\n", n);
	}
	else if (n == 0)
	{
		printf("Last digit of n is %d and is 0\n", n);
	}
	else if (n < 6)
	{
		printf("Last digit of n is %d and is less than 6 and not 0\n", n);
	}
	return (0);
}
