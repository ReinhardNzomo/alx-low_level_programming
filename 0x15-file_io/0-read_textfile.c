#include "main.h"
#include <stdlib.h>

/**
* read_textfile - reads a text file and
*	prints it to the POSIX standard output.
* @filename: pointer to the name of the file
* @letters: number of letters the function
*	should read and print.
* Return: 0- if func fails, 0/w-number of bytes
*	the func can read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t opn, rd, wr;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		return (0);
	}

	opn = open(filename, O_RDONLY);
	rd = read(opn, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, rd);

	if (opn == -1 || rd == -1 || wr == -1 || wr != rd)
	{
		free(buffer);
		return (0);
	}

	free (buffer);
	close(opn);

	return (wr);
}
