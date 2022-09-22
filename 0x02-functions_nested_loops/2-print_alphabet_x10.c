#include "main.h"
#include <unistd.h>

/**
 * print_alphabet_x10 -  prints the alphabet
 * On lowercase on 10 lines.
 *
 * Return: Returns nothing.
 */
void print_alphabet_x10(void)
{
	int i;
	int x = 0;

	while (x <= 9)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
		x++;
	}
}
