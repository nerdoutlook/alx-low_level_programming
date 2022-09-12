#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */


/* betty style doc for function main goes there */
/**
 *Main - Function to determine if random number is positive or negative
 *@void
 *
 * Description: This function generates a random number and determines
 * it the number is positive, negative or is zero
 * Return: Return zero
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
