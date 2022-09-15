#include <stdio.h>

/**
* main - print 1-100, fizz, buzz, fizzbuzz
* Return: 0
*/
int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if ((x % 3 == 0) || (x % 5 == 0))
		{
			if (x % 3 == 0)
			{
				printf("Fizz");
			}
			if (x % 5 == 0)
			{
				printf("Buzz");
			}
		}
		else
		{
			printf("%d", x);
		}
		if (x != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
