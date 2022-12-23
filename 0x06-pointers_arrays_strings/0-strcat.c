#include "main.h"
/**
 * _strcat - This concatenates twoa strings.
 * @dest: Input string 1.
 * @src: Input string 2.
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	char *n = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';

	return (n);
}
