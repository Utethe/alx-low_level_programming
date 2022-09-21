#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: pointer to string str
 */
void print_rev(char *s)
{
	int i;
	int slen = strlen(s);

	for (i = slen - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
