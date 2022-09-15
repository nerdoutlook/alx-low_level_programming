#include <stdio.h>
/**
 * main - This function prints the
 * Alphabets in reverse order
 *
 * Return: Returns 0
 */
int main(void)
{
	int count = 122;
	char nl = '\n';

	while (count >= 97)
	{
		putchar(count);
		count--;
	}
	putchar(nl);
	return (0);
}
