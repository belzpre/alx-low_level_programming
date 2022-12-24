#include "main.h"
/**
 * _strcpy - This copies the string pointed to by src, including
 * the terminating null byte (\0), to the buffer pointed to
 * by dest.
 * @dest: Pointer to destination of string.
 * @src: Pointer to source string.
 *
 * Return: Pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	char *n = dest;

	while (*src)
		*dest++ = *src++;

	return (n);
}
