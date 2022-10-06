#include <stdio.h>

/**
 * main - Prints the sum of all multiples of 3 or 5 below 1024
 *
 * Return: Nothing
 */
int main(void)
{
	int i, total;

	for (i = 1; i <= 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			total = total + i;
		}
	}
	printf("%d", total);
	printf("\n");
	return (0);
}
