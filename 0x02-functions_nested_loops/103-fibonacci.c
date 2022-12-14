#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	long int f[50], sum = 2;

	f[0] = 1;
	f[1] = 2;
	printf("%ld, %ld, ", f[0], f[1]);

	for (i = 2; i < 50; i++)
	{
		f[i] = f[i - 1] + f[i - 2];
		if ((f[i] % 2) == 0 && f[i] < 4000000)
			sum += f[i];
	}
	printf("%ld\n", sum);

	return (0);
}
