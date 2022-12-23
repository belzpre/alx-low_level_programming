#include "main.h"
/**
 * _strcmp - This compares two strings.
 * @s1: Input string 1.
 * @s2: Input string 2.
 * Return: The difference of s1 and s2.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++, s2++;
	}

	return (*s1 - *s2);
}
