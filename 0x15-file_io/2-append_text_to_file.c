#include "main.h"

/**
 * append_text_to_file - responsible for appending text at the end of a file
 * @filename: filename
 * @text_content: content addded to the file
 *
 * Return: if sucessful returns 1, failure -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f;
	int num_letters;
	int rwrd;

	if (!filename)
		return (-1);

	f = open(filename, O_WRONLY | O_APPEND);

	if (f == -1)
		return (-1);

	if (text_content)
	{
		for (num_letters = 0; text_content[num_letters]; num_letters++)
			;

		rwrd = write(f, text_content, num_letters);

		if (rwrd == -1)
			return (-1);
	}

	close(f);

	return (1);
}
