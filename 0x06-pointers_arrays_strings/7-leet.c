#include "main.h"
/**
 * leet - This encodes a string into 1337.
 * @s: Input string to be encoded.
 *
 * Return: Encode string.
 */
char *leet(char *s)
{
	int i = 0, j;
	char nums[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'},
	     letrs[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	while (s[i])
	{
		for (j = 0; j < 10; j++)
			if (s[i] == letrs[j])
				s[i] = nums[j];
		i++;
	}

	return (s);
}
