#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: pointer variable to array
 * @n: number of elements of the array
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	char temp;
	int i;

	for (i = 0; i < n; i++)
	{
		if (n == 0 || n < 0)
			break;
		temp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = temp;
		n--;
	}
}
