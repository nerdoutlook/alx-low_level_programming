#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
		largest = a;
	else if (b > a && b > c)
		largest = b;
	else if (c > a && c > b)
		largest = c;
	else if (a == b && b == c)
		largest = a = b = c;
	else if ((a == b) && a > c)
		largest = a = b;
	else if ((b == c) && c > a)
		largest = b = c;
	else if ((a == c) && a > b)
		largest = a = c;
	return (largest);
}
