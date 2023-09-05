#include "main.h"

/**
 * read_textfile - reads a text file and printsto POSIX stdout
 * @filename: name of file
 * @letters: numbers of letters to be read and printed
 *
 * Return: numbers of letters read and printed, returns 0  if failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, rd, wr;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	rd = read(op, buff, letters);
	wr = write(STDOUT_FILENO, buff, rd);

	if (op == -1 || rd == -1 || wr== -1 || wr != rd)
	{
		free(buff);
		return (0);
	}

	free(buff);
	close(op);

	return (wr);
}
