#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - determines if a number is greater than 5 or less than 6
 *
 * uche writes
 *
 * Return: Always (0)
 */

int main(void)
{
	int n, l;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	l = n % 10;

	if (l > 5)

	{
		printf("Last digit of %d is %d and is greater than 5\n", n, l);

	}
	else if (l == 0)
	{
		printf("Last digit of %d is %d and is equal to 0\n", n, l);

	}
	else
	{
		printf("Last digit of %d is %d and is less than 6\n", n, l);
	}
	return (0);
}
