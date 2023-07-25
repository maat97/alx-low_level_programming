#include "main.h"

/**
 * main - generates random password for 101- crackme
 * Return: zero
*/

int main(void)
{
	int sum = 0;
	char c;

	srand(time(NULL));
	while (sum <= 2645)
	{
		c = '!' +  (rand() % ('~' - '!'));
		sum += c;
		putchar(c);
	}
	putchar(2772 - sum);
	return (0);
}
