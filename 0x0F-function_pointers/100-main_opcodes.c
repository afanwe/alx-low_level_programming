#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints its own opcodes
 * @argc: number of arguments passed on execution
 * @argv: array of arguments passed on execution
 * Return: 0 upon succesful execution
 */

int main(int argc, char *argv[])
{
	int i, num_bytes;
	char *array;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	array = (char *)main;
	i = 0;

	while (i < num_bytes)
	{
		if (i == num_bytes - 1)
		{
			printf("%02hhx\n", array[i]);
			break;
		}
		printf("%02hhx ", array[i]);
		i++;
	}
	return (0);
}
