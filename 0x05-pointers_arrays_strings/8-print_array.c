#include "main.h"
#include <stdio.h>

/**
 * print_array -  prints n elements of an array of integers
 * @a: pointer to array
 * @n: number of elements from array to print
 *
 * Return: Nothing.
 */
void print_array(int *a, int n)
{
	int len_of_array, i;

	for (i = 0; a[i] != '\0'; i++)
	{
		len_of_array = len_of_array + i;
	}
	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (n - 1 > i)
			printf(", ");
		else
			printf("\n");
		break;
	}
	for (i = 0; i <= 1; i++)
	{
	if (n > len_of_array)
		printf("\n");
	}
}
