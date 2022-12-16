#include "main.h"
void print_integer(int m);

/**
 * print_number - This prints an integer.
 * @n: Input number.
 *
 * Return: N/A.
 */
void print_number(int n)
{
	if (n == 0)
		_putchar('0');
	else if (n < 0)
	{
		_putchar('-');
		print_integer(n * -1);
	}
	else
		print_integer(n);
}

/**
 * print_integer - This prints the values of n.
 * @m: Input number.
 *
 * Return: N/A.
 */
void print_integer(int m)
{
	int i;

	for (i = 1000000000; i >= -1000000000; i /= 10)
		if (m / i != 0)
		{
			_putchar((m / i) % 10 + '0');
		}
}
