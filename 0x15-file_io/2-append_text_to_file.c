#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: name of the file
 * @text_content: string to add at the end of the file
 *
 * Return: -1 if file name is NULL, file does not exist or no permission
 *         1 if file exists
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op;
	int wr;
	int n = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (n = 0; text_content[n];)
			n++;
	}

	op = open(filename, O_WRONLY | O_APPEND);
	wr = write(op, text_content, n);

	if (op == -1 || wr == -1)
		return (-1);

	close(op);

	return (1);
}
