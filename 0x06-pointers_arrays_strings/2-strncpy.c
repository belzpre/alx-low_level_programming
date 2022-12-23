#include "main.h"
/**
 * _strncpy - This copies a string.
 * @dest: Input string 1.
 * @src: Input string 2.
 * @n: Input integer.
 * Return: A pointer to the resulting string, dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int len = 0, i;
	char *m = dest, *x = src;

	while (*src)
	{
		len++;
		src++;
	}

	len++;

	if (n > len)
		n = len;

	src = x;

	for (i = 0; i < n; i++)
		*dest++ = *src++;

	return (m);
}
