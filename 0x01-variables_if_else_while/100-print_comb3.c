#include <stdio.h>

/**
 * main - print possible combination
 * Of two digits, no repitiion.
 *
 * Return: Always 0
 */
int main(void)
{
	int i, j;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			if (j != 48)
			{
				if (i != j && i < j)
				{
					putchar(i);
					putchar(j);
					if (i == 56 && j == 57)
						break;
					putchar(',');
					putchar(' ');
				}

			}
		}
	}

	putchar('\n');
	return (0);
}
