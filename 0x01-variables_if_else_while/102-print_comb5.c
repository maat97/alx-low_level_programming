#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: write a program prints all possible
 *		different combination of two digits.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int firstdigit = 0;

	int seconddigit;

	while (firstdigit <= 99)
	{
		seconddigit = firstdigit;
			while (seconddigit <= 99)
			{
				if (seconddigit != firstdigit)
				{
					putchar((firstdigit / 10) + 48);
					putchar((firstdigit % 10) + 48);
					putchar(' ');
					putchar((seconddigit / 10) + 48);
					putchar((seconddigit % 10) + 48);

					if (firstdigit != 98 || seconddigit != 99)
					{
						putchar(',');
						putchar(' ');
					}
				} seconddigit++;
			} firstdigit++;
	}
	putchar('\n');
	return (0);
}
