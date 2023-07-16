#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all alphabet in lowercase then in uppercase letters.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch = 'a';
	/*char CH = 'A';*/

	/*prints a - z*/
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	/* Reset ch to "a" before printing A - Z */

	ch = 'A';

	/*prints A - Z*/
	while (ch <= 'Z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
