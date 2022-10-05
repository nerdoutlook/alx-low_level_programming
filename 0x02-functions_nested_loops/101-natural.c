#include <stdio.h>

int main(void)
{
	int i, total;

	for (i = 1; i <= 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			total = total + i;
		}
	}
	printf("%d", total);
	printf("\n");
	return (0);
}
