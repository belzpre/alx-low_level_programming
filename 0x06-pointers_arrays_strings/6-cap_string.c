int check_seperators(char m);
/**
 * cap_string - This capitalizes all words of a string.
 * @s: Input string.
 *
 * Return: The pointer to the input string.
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (i == 0 && (s[i] >= 'a' && s[i] <= 'z'))
			s[i] -= 32;
		if (check_seperators(s[i]) && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
			s[i + 1] -= 32;
		i++;
	}

	return (s);
}

/**
 * check_seperators - This checks for separators of words.
 * @m: Input character.
 *
 * Return: 1 or 0.
 */
int check_seperators(char m)
{
	int i;
	char sep[13] = {' ', '\t', '\n', ',', ';', '.', '!',
	       	'?', '"', '(', ')', '{', '}'};
	for (i = 0; i < 13; i++)
	{
		if (m == sep[i])
			return (1);
	}

	return (0);
}
