#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints the 'n' times table starting from 0
 * @n: determines lenght of times table
 *
 * Return: Returns 0
 */
void print_times_table(int n)
{
	int i, j;

	if (n < 15 && n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if (n > 15 || n < 0)
					break;
				if (n == 0)
					printf("%d\n", n);
				if (j == 0)
					printf("%d", (i * j));
				if (j == 1 && (i * j <= 9))
					printf("  %d", (i * j));
				if ((i * j) <= 9 && j >= 2)
					printf("  %d", (i * j));
				if ((i * j) >= 10 && (i * j <= 99))
					printf(" %d", (i * j));
				if ((i * j >= 100) && (i * j <= 999))
					printf("%d", (i * j));
				if (j < n)
					printf(", ");
			}
			if (!(n > 15 || n < 0))
				printf("\n");
		}
	}
}
