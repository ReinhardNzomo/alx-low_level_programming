#include "main.h"
#include <string.h>

/**
* binary_to_unit - binary to int converter
* @b: binary
* Return: number
*/

unsigned int binary_to_unit(const char *b)
{
	unsigned int decimal = 0;
	int slen = strlen(b);
	int base = 1;

	if (!check_valid_string(b))
		return (0);

	while (slen)
	{
		decimal += ((b[slen - 1] - '0') * base);
		base *= 2;
		slen--;
	}
	return (decimal);
}

/**
 * check_valid_string - checks if a string has only 0's and 1's
 * @b: string to be checked
 *
 * Return: 1 if string is valid, 0 otherwise
 */
int check_valid_string(const char *b)
{
	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '1' && *b != '0')
			return (0);
		b++;
	}
	return (1);
}
