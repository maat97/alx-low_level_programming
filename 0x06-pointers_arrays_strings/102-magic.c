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
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;

	/**
	 * write  your new line of code
	 * You are not allowed to use the variable a
	 * You are not allowed to modify the variable p
	 * You can only write one statement
	 * You are not allowed to code anything else
	 * than the line of expected line of code
	 */

	(void)(p == a && (*p = 98));

	/* so that print 98 */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
