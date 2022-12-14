#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - generate random valid passwords
 *
 * Return: Always zero
 */
int main(void)
{
	int i, j, k, l;
	char c[] = "1234567890qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM";
	char p[58];

	srand(time(NULL));
	while (l != 2772)
	{
		i = k = l = 0;
		while ((2772 - 122) > l)
		{
			j = rand() & 62;
			p[i] = c[j];
			l += c[j];
			i++;
		}
		while (c[k])
		{
			if (c[k] == (2772 - l))
			{
				p[i] = c[k];
				l += c[k];
				i++;
				break;
			}
			k++;
		}
	}
	p[i] = '\0';
	printf("%s", p);
	return (0);
}
