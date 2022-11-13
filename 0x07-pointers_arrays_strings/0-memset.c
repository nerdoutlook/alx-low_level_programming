#include "main.h"

/**
 * _memset - fills memory with a constant byte 'b'
 * @s: pointer to memory location
 * @b: constant byte to write to memory
 * @n: the firsgt n byte(s) of the memory
 *
 * Return: pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i <= n)
	{
		*s = b;
		i++;
		s++;
	}
	return (s);
}
