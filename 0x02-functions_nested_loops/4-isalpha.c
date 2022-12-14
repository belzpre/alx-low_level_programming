#include "main.h"
/**
 * _isalpha - See the description
 * @c: input character
 * Description: This checks for alphabetic character, lowercase or uppercase.
 *
 * Return: 1 if c is alphabetic, lowercase or uppercase, 0 otherwise.
 */
int _isalpha(int c)
{
	char i, j;
	int m = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		for (j = 'A'; j <= 'Z'; j++)
		{
			if (c == i || c == j)
			m = 1;
		}
	}

	return (m);
}
