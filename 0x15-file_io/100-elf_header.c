#include "main.h"

/**
 * exit_code - returns exit code after checking for both files
 * @er_code: error code to return
 * @str: string to print depending on the code returned
 * @fl1: file one
 * @fl2: file two
 * Return: code 
 */

void exit_code(int er_code, const char *str, int fl1, int fl2)
{
	if (fl1 != -1)
		close(fl1);

	if (fl2 != -1)
		close(fl2);

	dprintf(STDERR_FILENO, str, er_code);

	exit(er_code);
}

/**
 * main - checks and executes code
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 upon successful execution
 */

int main(int argc, char *argv[])
{
	const char *file_from, *file_to;
	int fl_src, fl_dest;
	char buf[BUFFER_SIZE];
	ssize_t read_bytes, wrt_bytes;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		return (97);
	}

	file_from = argv[1];
	file_to = argv[2];
	fl_src = open(file_from, O_RDONLY);

	if (fl_src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		return (98);
	}

	fl_dest = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (fl_dest == -1)
		exit_code(99, "Error: Can't write to file %s\n", fl_src, fl_dest);

	while ((read_bytes = read(fl_src, buf, BUFFER_SIZE)) > 0)
	{
		wrt_bytes = write(fl_dest, buf, read_bytes);

		if (wrt_bytes == -1)
			exit_code(99, "Error: Can't write to file %s\n", fl_src, fl_dest);
		if (wrt_bytes < read_bytes)
			exit_code(100, "Error: Can't close fd %d\n", fl_src, fl_dest);
	}
	if (read_bytes == -1)
		exit_code(98, "Error: Can't read from file %s\n", fl_src, fl_dest);

	if (close(fl_src) == -1 || close(fl_dest) == -1)
		exit_code(100, "Error: Can't close fd %d\n", fl_src, fl_dest);

	return (0);
}
