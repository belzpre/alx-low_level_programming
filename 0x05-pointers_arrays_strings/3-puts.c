#include "main.h"
/**
 * _puts - This prints a string, followed by a new line,
 * to stdout.
 * @str: Input string.
 *
 * Return: N/A.
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
