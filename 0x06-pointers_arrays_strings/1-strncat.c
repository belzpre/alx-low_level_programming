#include "main.h"
/**
 * _strncat - This concatenates two strings.
 * @dest: Input string 1.
 * @src: Input string 2.
 * @n: Input integer.
 * Return: A pointer to the resulting string, dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0, i;
	char *m = dest, *x = src;

	while (*src)
	{
		len++;
		src++;
	}

	while (*dest)
		dest++;

	if (n > len)
		n = len;

	src = x;

	for (i = 0; i < n; i++)
		*dest++ = *src++;

	*dest = '\0';

	return (m);
}
