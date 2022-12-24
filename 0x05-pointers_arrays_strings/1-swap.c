#include "main.h"
/**
 * swap_int -  This swaps the values of two integers.
 * @a: Inout integer 1.
 * @b: Inout integer 2.
 *
 * Return: N/A.
 */
void swap_int(int *a, int *b)
{
	int swapped;

	swapped = *a;
	*a = *b;
	*b = swapped;
}
