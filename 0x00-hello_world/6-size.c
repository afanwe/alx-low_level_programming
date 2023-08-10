#include <stdio.h>

/**
 * main - This prints sizes of different datatypes
 * Return: This will return 0 upon successful execution
 */

int main(void)
{
	char initial = 'A';
	int age = 29;
	long int postcode = 4277;
	long long int contact_number = 5555554774545;
	float balance = 1.15;

	printf("Size of a char: %lu byte(s)\n", sizeof(initial));
	printf("Size of an int: %lu byte(s)\n", sizeof(age));
	printf("Size of a long int: %lu byte(s)\n", sizeof(postcode));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(contact_number));
	printf("Size of a float: %lu byte(s)\n", sizeof(balance));
	return (0);
}
