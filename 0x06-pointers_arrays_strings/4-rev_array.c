#include "main.h"
/**
 * reverse_array - This  reverses the content of an array of integers.
 * @a: Input array.
 * @n: The number of elements of the array.
 * Return: N/A.
 */
void reverse_array(int *a, int n)
{
	int m, i = 0;

	while (i < n--)
	{
		m = a[i];
		a[i++] = a[n];
		a[n] = m;
	}
}
