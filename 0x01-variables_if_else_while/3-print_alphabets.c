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
	char CH = 'A';

	/*prints a - z*/
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	/*prints A - Z*/
	while (ch <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');

	return (0);
}
