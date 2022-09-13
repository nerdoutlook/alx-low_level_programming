#include <stdio.h>
/**
 * main - prints the letters of the alphabets
 * Lowercase first then uppercase
 *
 * Return: Returns 0
 */
int main(void)
{
	char lowerCase = 'a';
	char upperCase = 'A';
	char nl = '\n';

	while (lowerCase <= 'z')
	{
		putchar(lowerCase);
		lowerCase++;
	}
	while (upperCase <= 'Z')
	{
		putchar(upperCase);
		upperCase++;
	}

	putchar(nl);
	return (0);
}
