nclude <stdlib.h>
#include <time.h>
/**
 * main - Print if a random number
 *        is positive or negative or zero
 * Return: Always 0 when success
 */
int main(void)
{
		int n;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
					
		if (n > 0)
			print("%d is positive\n", n);
	        else if (n < 0)
			print("%d is negative\n", n);
		else
			print("%d is zero", n);

		return (0);
}
