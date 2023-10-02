#include "main.h"

/**
 * create_file - creates a new file
 * @filename: name of file to create
 * @text_content: string to write toi file
 * Return: 1 if successful, -1 if not
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t bytes_written;
	int fl;

	if (filename == NULL)
		return (-1);

	fl = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		bytes_written = write(fl, text_content, strlen(text_content));

		if (bytes_written == -1)
		{
			close(fl);
			return (-1);
		}
	}

	close(fl);

	return (1);
}
