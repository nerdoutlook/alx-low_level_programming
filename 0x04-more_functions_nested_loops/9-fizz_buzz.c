#include <stdio.h>

/**
 * main - prints 1 to 100
 * For multiples of 3 print fizz, for 5 print buzz
 * For multiples of 3 and 5, FizzBuzz.
 *
 * Return: Returns 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i <= 99)
			printf(" ");
	}
	printf("\n");
	return (0);
}
