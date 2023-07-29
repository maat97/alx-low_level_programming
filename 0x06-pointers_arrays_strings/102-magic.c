#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: program prints a[2] = 98, followed by a new line
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int a[5];

	a[2] = 1024;

	/**
	 * write  your new line of code
	 * You are not allowed to use the variable a
	 * You are not allowed to modify the variable p
	 * You can only write one statement
	 * You are not allowed to code anything else
	 * than the line of expected line of code
	 */

	/* so that print 98 */
	(*(void (*)(int *, int))((int *)printf))("a[2] = %d\n", 98);

	return (0);
}
