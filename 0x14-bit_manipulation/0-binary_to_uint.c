#include "main.h"
#include <string.h>
/**
* binary_to_uint - binary to int converter
* @b: binary
* Return: number
*/

unsigned int binary_to_uint(const char *b)
{
	int str_len = strlen(b);
	int total = 0;
	int decimal_value = 1;
	int i;

	for (i = (str_len - 1); i >= 0; i--)
	{
		if (b[i] == 1)
		{
			total += decimal_value;
		}
		decimal_value *= 2;
	}
	return (total);
}
