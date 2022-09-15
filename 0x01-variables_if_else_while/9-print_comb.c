#include <stdio.h>
/**
 * main - This function prints out
 * 0 to 9 with comma's and space as
 * Delimiters
 *
 * Return: Returns 0
 */
int main(void)
{
	int n = 48;
	int comma = 44;
	int new_line = 10;
	int space = 32;

	while (n <= 57)
	{
		if (n <= 57)
			putchar(n);
		if (n == 57)
			break;
		n++;
		putchar(comma);
		putchar(space);
	}
	putchar(new_line);
	return (0);
}
