#include "main.h"

/**
 * _islower - This functions determines if the given
 * Character is lowercase of UPPERCASE
 *
 * @c: Charactr to be evaluated.
 *
 * Return: Returns 1 or 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
