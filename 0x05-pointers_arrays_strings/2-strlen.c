#include "main.h"
/**
 * _strlen -  This returns the length of a string.
 * @s: Input string.
 *
 * Return: N/A.
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
