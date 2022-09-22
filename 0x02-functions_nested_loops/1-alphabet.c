#include <unistd.h>
#include "main.h"

/**
 * print_alphabet - prints letter a to z
 * In lowercase.
 *
 * Returns: zero always.
 */
void print_alphabet(void)
{
	int a = 97;

	for (; a <= 122; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
