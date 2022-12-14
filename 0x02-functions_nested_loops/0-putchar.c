#include <unistd.h>
#include "fu.h"
/**
 * main - see the description
 * Description: This program prints "_putchar" followed by a new line.
 * Return:0
 */
int main(void)
{
	char word[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(word[i]);
	_putchar('\n');

	return (0);
}
