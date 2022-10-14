#include "variadic_functions.h"
#include <stdarg.h>
/**
*sum_them_all- sums all parameters
*@n: first parameter
*Return: 0 if n is 0/ sum
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	int sum = 0;
	unsigned int i;

	if (n == 0)
	{
		return (0);
	}

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, int);
	}

	va_end(list);
	return (sum);
}
