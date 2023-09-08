#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: filename .
 * @text_content: text writen on the file
 *
 * Return: if sucessful returns 1, In case of a error returns -1
 */
int create_file(const char *filename, char *text_content)
{
	int f;
	int num_letters;
	int rwrd;

	if (!filename)
		return (-1);

	f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (f == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (num_letters = 0; text_content[num_letters]; num_letters++)
		;

	rwrd = write(f, text_content, num_letters);

	if (rwrd == -1)
		return (-1);

	close(f);

	return (1);
}
