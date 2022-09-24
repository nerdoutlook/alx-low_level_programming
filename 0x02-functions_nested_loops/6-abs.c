#include "main.h"

/**
 * _abs - This function returns the absolute
 * Value of any given number
 * @a: This is the number to be evaluated
 *
 * Return: The absolute value
 */
int _abs(int a)
{
	if (a > 0 || a == 0)
		a = a;
	if (a < 0)
	{
		a = ((a * a) / (-(a)));
		return (a);
	}

	return (a);

}
