#include "main.h"
/**
 * print_sign - See the description
 * @c: input number
 * Description: This checks for the sign of the number.
 * Return: 1 if the number is positive, 0 if the number is zero,
 * -1 if the number is negative.
 */
int print_sign(int num)
{
	int j;

	if (num > 0)
	{
		j = 1;
		_putchar('+');
	}
	else if (num == 0)
	{
		j = 0;
		_putchar('0');
	}
	else
	{
		j = -1;
		_putchar('-');
	}

	return (j);
}
