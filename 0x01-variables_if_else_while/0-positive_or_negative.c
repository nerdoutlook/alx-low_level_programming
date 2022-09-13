#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - code to check if a num is positive or negative
 *
 * Return: Output is 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}

	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
