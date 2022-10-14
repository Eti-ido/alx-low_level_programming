#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - assigns a random number to the variable
 *
 * Result - Always 0 (Success)
 */
void main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("n: ");
	scanf("%d", &n);
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
}
