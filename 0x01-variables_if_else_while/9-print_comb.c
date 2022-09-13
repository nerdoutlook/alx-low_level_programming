#include <stdio.h>

int main()
{
	int n = 48;
	int comma = 44;
	int new_line = 10;
	int space = 32;
		
	while (n <= 57)
	{
		if (n <= 57)
			putchar(n);
		if (n == 57)
			break;
		n++;
		putchar(comma);
		putchar(space);

	}
	putchar(new_line);
	
	
	return (0);
}
