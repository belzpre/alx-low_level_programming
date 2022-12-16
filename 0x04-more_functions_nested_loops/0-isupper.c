#include "main.h"
/**
 * _isupper - This checks for uppercase character.
 * @c: Input.
 * Return: 1 or 0.
 */
int _isupper(int c)
{
	char upper;
	int check = 0;

	for (upper = 'A'; upper <= 'Z'; upper++)
	{
		if (c == upper)
		{
			check = 1;
			break;
		}
	}

	return (check);
}
