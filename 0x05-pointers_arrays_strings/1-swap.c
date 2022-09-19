#include "main.h"
/**
* swap_int- swap values of two integers
* @a: integer 1
* @b: integer 2
* Return: 0
*/
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
