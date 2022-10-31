#include "main.h"

/**
* flip_bits - return count to be flipped
* @n: initial number
* @m: final number
* Return: number
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flipped = n ^ m;
	int count = 0;

	while (flipped)
	{
		if (flipped & 1)
			count++;
		flipped >>= 1;
	}
	return (count);
}
