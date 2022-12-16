#include "main.h"
/**
 * _isdigit - This checks for a digit (0 through 9).
 * @c: Input.
 * Return: 1 or 0.
 */
int _isdigit(int c)
{
	char i;
	int isdigit = 0;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == c)
		{
			isdigit = 1;
			break;
		}
	}

	return (isdigit);
}
