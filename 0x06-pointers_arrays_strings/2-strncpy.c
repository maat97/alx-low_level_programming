#include "main.h"

/**
 * *_strncpy - function that copies string
 *
 * @dest: pointer to destination input
 * @src: pointer to source input
 * @n: most number or bytes from @src
 *
 * Return: pointer to resulting string @dest
 */

char *_strncpy(char *dest, char *src, int n);
{
	int i;

	/**
	 * iterate through src array
	 * where if there is no nul byte
	 * among the first n bytes of source
	 * the string placed in dest will not be
	 * null terminated
	 */
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	/**
	 * if the length of source is less than n
	 * write additional nullbytes to dest to
	 * ensure that a total of n bytes is written
	 */
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
