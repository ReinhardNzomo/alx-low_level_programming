#include "main.h"

/**
* get_bit - value of a bit at given index
* @n: number
* @index: index starting from 0 of the bit required
* Return: binary
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8)
		return (-1);

	return ((n >> index) & 1);
}
