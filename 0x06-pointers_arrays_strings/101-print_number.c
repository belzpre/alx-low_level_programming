#include "main.h"
/**
 * deci - In base 10.
 * @n: Exponent.
 *
 * Return: Exponent.
 */
int deci(int n)
{
	int b = 10;

	while (n > 0)
	{
	       b *= 10;
	       n--;
	}

	return (b);
}

/**
 * print_number -  This prints an integer.
 * @n: Input integer to print.
 *
 * Return: void.
 */
void print_number(int n)
{
	int p;

	p = deci(8);

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	else if (n == 0)
		_putchar('0');

	else
	{
		while (n / p == 0)
			p /= 10;

		while (p >= 1)
		{
			_putchar((n / p) + '0');
			n %= p;
			p /= 10;
		}
	}
}
