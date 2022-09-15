#include "main.h"

/**
* print_square - prints # in square of size
* @size: parameter
* Return: 0
*/
void print_square(int size)
{
	int x, y;

	if (size > 0)
	{
		for (x = 0; x <= size; x++)
		{
			for (y = size; y <=size; y++)
			{
				_putchar(35);
			}
			_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
