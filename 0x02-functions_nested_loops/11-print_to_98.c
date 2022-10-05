#include <stdio.h>
/**
 * print_to_98 - print all natural numbers from n to 98
 * @n: beginning of iteration
 *
 * Return: Nothing
 */
void print_to_98(int n)
{
	int j = 98;

	if (n < j)
	{
		for (n = n; n < j; n++)
		{
			printf("%d", n);
			if (n != j)
				printf(", ");
		}
	}
	if (n > j)
	{
		for (n = n; n > j; n--)
		{
			printf("%d", n);
			if (n != j)
				printf(", ");
		}
	}
	if (n == j)
		printf("%d", n);
	printf("\n");
}
