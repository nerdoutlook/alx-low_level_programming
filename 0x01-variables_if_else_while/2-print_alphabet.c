#include <stdio.h>
/**
 * main - Prints the alphabets in lowercase
 *
 * Return: Output is 0
 */
int main(void)
{
	char ch = 'a';
	char nl = '\n';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar(nl);
	return (0);
}
