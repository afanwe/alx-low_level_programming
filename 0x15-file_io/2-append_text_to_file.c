#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of file to append to
 * @text_content: string of text to append and NULL terminate
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fl;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	fl = open(filename, O_WRONLY | O_APPEND);

	if (fl == -1)
		return (-1);

	bytes_written = write(fl, text_content, strlen(text_content));

	if (bytes_written == -1)
	{
		close(fl);
		return (-1);
	}

	close(fl);
	return (1);
}
