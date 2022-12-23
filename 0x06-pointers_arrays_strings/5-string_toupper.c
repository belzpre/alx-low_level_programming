#include "main.h"
/**
 * string_toupper - This changes all lowercase letters of a string
 * to uppercase.
 * @s: Input string.
 *
 * Return: Pointer to the converted string.
 */
char *string_toupper(char *s)
{
	char *n = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		s++;
	}

	return (n);
}
