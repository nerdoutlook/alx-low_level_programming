#include <stdio.h>
#include <unistd.h>
/**
 * main - This function prints 0 to 9
 *
 * Return: Returns 0
 */
int main(void)
{
	int n = 0;

	for (n = 0; n <= 9; n++)
	{
		write(n);
	}
	return (0);
}
