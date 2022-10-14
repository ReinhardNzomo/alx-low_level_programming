#include "variadic_functions.h"

/**
* print_c - prints a char character
* @arg: list of arguments
* Return: 0
*/

void print_c(va_list arg)
{
	char letter = va_arg(arg, int);

	printf("%c", letter);
}


/**
* print_i - prints an int character
* @arg: list of arguments
* Return: 0
*/

void print_i(va_list arg)
{
	int num = va_arg(arg, int);

	printf("%d", num);
}


/**
* print_f - prints a float character
* @arg: list of arguments
* Return: 0
*/

void print_f(va_list arg)
{
	float num = va_arg(arg, double);

	printf("%f", num);
}


/**
* print_s - prints a string character
* @arg: list of arguments
* Return: 0
*/

void print_s(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}


/**
* print_all - prints anything from arguments
* @format: format of input
* Return: nothing
*/

void print_all(const char * const format, ...)
{
	va_list args;

	int i = 0, j = 0;

	char *separator = "";

	printer_a funcs[] = {
	{"c", print_c},
	{"i", print_i},
	{"f", print_f},
	{"s", print_s}
	};

	va_start(args, format);

	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(funcs[j].symbol)))
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print(args);
			separator = ", ";
		}

		i++;

	}

	printf("\n");

	va_end(args);
}
