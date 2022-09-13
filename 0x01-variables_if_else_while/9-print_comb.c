#include <stdio.h>

int main()
{
	int n = 48;
	int comma = 44;
	int new_line = 10;

	
	while (n <= 57)
	{
		if (n < 57)
		{
			putchar(n);
			putchar(comma);
		}

		if (n == 57)
		{
			putchar(n);
			putchar(new_line);
		}
		n++;
	}

	return (0);

}

