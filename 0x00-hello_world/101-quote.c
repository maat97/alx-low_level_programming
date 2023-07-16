#include <unistd.h>

/**
 * main -Entry point
 *
 * Description: print a quote using write function
 *		write (int fd.const void *buf.size_t count)
 *
 * Return: 1 (not success)
*/

int main(void)
{
	char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	ssize_t len = sizeof(quo) - 1;

	write(2, quo, len);

	return (1);
}
