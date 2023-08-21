#include "main.h"
#include <stdio.h>

/**
 * main - checks code and executes
 * Return: 0 upon successful executions
 */

int main(void)
{
	char *str;
	int len;

	str = "My first strlen!";
	len = _strlen(str);
	printf("%d\n", len);
	return (0);
}
