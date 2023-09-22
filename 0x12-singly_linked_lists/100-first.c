#include <stdio.h>

void run_at_beg(void) __attribute__ ((constructor));

/**
 * run_at_beg - prints to stdout before execution of main
 */

void run_at_beg(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
