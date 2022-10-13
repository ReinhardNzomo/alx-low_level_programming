i#include <stdio.h>
#include <stdlib.h>

/**
*main - print the opcodes of its own main function
*@argc: number of arguments
*@argv: array of arguments
*Return: 1/2
*/

int main(int argc, char *argv[])
{
	int i, bytes;
	int (*address)(int, char **) = main;
	unsigned char opcodes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < bytes; i++)
	{
		opcodes = *(unsigned char *)address;
		printf("%.2x", opcodes);

		if (i == bytes - 1)
		continue;

		printf(" ");
		address++;
	}

	printf("\n");
	return (0);
}
