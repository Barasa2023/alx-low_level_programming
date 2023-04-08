#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: file name to read.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_d;
	ssize_t wrd, wr;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (file_d == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	wrd = read(file_d, buf, letters);
	wr = write(STDOUT_FILENO, buf, wrd);

	close(file_d);

	free(buf);

	return (wr);
}
