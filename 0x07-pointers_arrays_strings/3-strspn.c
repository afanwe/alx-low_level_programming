#include "main.h"

/**
 * _strspn - checks for segments of s that consist of accept
 * @s: string to check
 * @accept: characters to search for
 * Return: returns number of segments to found
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len1, len2, seg;
	unsigned int i, j;

	len1 = 0;
	len2 = 0;
	seg = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len1++;
	}
	for (i = 0; accept[i] != '\0'; i++)
	{
		len2++;
	}
	for (i = 0; i < len1; i++)
	{
		unsigned int match = 0;

		for (j = 0; j < len2; j++)
		{
			if (s[i] == accept[j])
			{
				match = 1;
				break;
			}
		}
		if (match != 0)
		{
			seg++;
		}
		else
		{
			break;
		}
	}

	return (seg);
}
