#include "main.h"

/**
 * read_textfile - reads  text s from a file and prints the
 * letters to standard outou --
 * @filename: filename to be read
 * @letters: numb of letters to be printed
 *
 * Return: numb of letters that were printed. In case of a error, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t num_rd, num_wr;
	char *buffer;

	if (!filename)
		return (0);

	f = open(filename, O_RDONLY);

	if (f == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	num_rd = read(f, buffer, letters);
	num_wr = write(STDOUT_FILENO, buffer, num_rd);

	close(f);

	free(buffer);

	return (num_wr);
}
