#include <stdio.h>
/**
 * main - This function prints the
 * Hexadecimal value of a digit
 *
 * Return: Returns 0
 */
int main(void)
{
	int hxn = 0;

	while (hxn <= 15)
	{
		printf("%x", hxn);
		hxn++;
	}
	printf("\n");
	return (0);
}
