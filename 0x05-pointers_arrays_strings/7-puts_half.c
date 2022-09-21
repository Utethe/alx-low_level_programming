#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: pointer to string str
 */
void puts_half(char *str)
{
	int i, l, n;

	l = strlen(str);
	n = (l % 2 == 0) ? l / 2 : ((l - 1) / 2) + 1;
	for (i = n; i < l; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
