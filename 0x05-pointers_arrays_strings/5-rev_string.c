#include "main.h"
#include <stdio.h>
/**
 * rev_string - Reverses a string
 * @s: pointer to string to be reversed
 */

void rev_string(char *s)
{
	int i, j, k;

	i = 0;
	while (s[i] != '\0')
		i++;

	printf("i = %d\n", i);	

	for (j = 0; j <= i; j++)
	{
		k = s[j];
		s[j] = s[i - 1];
		s[i] = k;
		printf("s[%d] is %c | s[%d] is %c\n", j, s[j], i, s[i]);
		i--;
	}
	_putchar('\n');
}
