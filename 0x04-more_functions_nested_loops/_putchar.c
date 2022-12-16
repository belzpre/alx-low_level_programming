#include <unistd.h>
/**
 * _putchar - This writes the character c to stdout.
 * @c: The character to print.
 *
 * Return: 1 or -1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
