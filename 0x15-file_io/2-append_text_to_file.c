#include "main.h"

/**
* append_text_to_file - append text at the end of file
* @filename: pointer to name of the file
* @text_content: string to add to end of the file
* Return:-1 if func fails or filename is NULL
*	or if file does not exists or user lack write permissions
*	otherwise, return 1
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, len = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
		{
			len++;
		}
	}

	op = open(filename, O_WRONLY | O_APPEND);
	wr = write(op, text_content, len);

	if (op == -1 || w == -1)
	{
		return (-1);
	}

	close(op);

	return (1);
}