#include <stdio.h>

/**
* main - checks for largest prime
* Return: 0
*/
int main(void)
{
	long x, y;

	x = 612852475143;

	for (y = 2; y < x; y++)
	{
		while (x % y == 0)
		{
			x = x / y;
		}
	}
	printf("%lu", y);
	printf("\n");
	return (0);
}
