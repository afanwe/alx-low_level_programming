#include "main.h"

/**
 * read_textfile - reads txt file to standard output
 * @filename: name if text file
 * @letters: number of characters to read
 * Return: number of bytes read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t read_bytes, rd_file, r;
	char *mem_buf;

	rd_file = open(filename, O_RDONLY);

	if (rd_file == -1)
		return (0);

	mem_buf = malloc(sizeof(char) * letters);

	if (mem_buf == NULL)
	{
		close(rd_file);
		return (0);
	}

	r = read(rd_file, mem_buf, letters);
	read_bytes = write(STDOUT_FILENO, mem_buf, r);

	free(mem_buf);
	close(rd_file);

	return (read_bytes);
}
