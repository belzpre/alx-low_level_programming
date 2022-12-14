#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - See the description
 * @n: input number
 * Description: This prints all natural numbers from n to 98,
 * followed by a new line.
 * Return: N/A.
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
}
