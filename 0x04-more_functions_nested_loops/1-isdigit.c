#include "main.h"
/**
 * _isdigit - checks if input is a digit
 * @c: Parameter to be checked
 *
 * Return: 1 if a digit and 0 if not
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}
