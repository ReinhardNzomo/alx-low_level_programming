#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *_buffer(char *file);
void close_file(int fd);

/**
* _buffer - Allocates 1024 bytes for a buffer.
* @file:file name buffer will store bytes for
* Return: pointer to new buffer
*/

char *_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
* close_file - close file descriptors
* @fd: file descriptor to close
*/

void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
* main - copy content of one file to another
* @argc: number of args
* @argv: pointers arguments to files
* Return: 0 on success
* Description: If the argument count is incorrect - exit code 97.
*              If file_from does not exist or cannot be read - exit code 98.
*              If file_to cannot be created or written to - exit code 99.
*              If file_to or file_from cannot be closed - exit code 100.
*/

int main(int argc, char *argv[])
{
	char *buffer;
	int source_file, dest_file, rd, wr;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_From file_to\n");
		exit(97);
	}

	buffer = _buffer(argv[2]);
	source_file = open(argv[1], O_RDONLY);
	rd = read(source_file, buffer, 1024);
	dest_file = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (source_file == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}

		wr = write(dest_file, buffer, rd);
		if (dest_file == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}

		rd = read(source_file, buffer, 1024);
		dest_file = open(argv[2], O_WRONLY | O_APPEND);

	} while (rd > 0);

	free(buffer);
	close_file(source_file);
	close_file(dest_file);

	return (0);
}
