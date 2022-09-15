#include <stdio.h>
/**
 * main - This function prints all
 * Characters of the alphabt except q & e
 *
 * Return: Returns 0
 */
int main(void)
{
	char lowerCase = 'a';
	char nl = '\n';

	while (lowerCase <= 'z')
	{
		if (lowerCase != 'q' && lowerCase != 'e')
		{
			putchar(lowerCase);
		}
		lowerCase++;
	}
	putchar(nl);
	return (0);
}
