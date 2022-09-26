#include <stdio.h>

/**
 * main - prints possible combination
 * For 3 digit numbers, no repition of
 * The same digits.
 *
 * Return: Always 0
 */
int main(void)
{
	int i, j, k;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (k = 48; k <= 57; k++)
			{
				if (j != 48 && i != j)
				{
					if (i != k && i < j && j < k)
					{
						putchar(i);
						putchar(j);
						putchar(k);
						if (i == 55 && j == 56 && k == 57)
						       break;	
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
