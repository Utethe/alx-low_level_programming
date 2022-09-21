#include "main.h"
#include <string.h>

/**
 * puts2 - prints every other character of a string,
 * starting with the first character, followed by a new line
 * @str: pointer to string str
 */
void puts2(char *str)
{
	int i, slen;

	slen = strlen(str);
	for (i = 0; i < slen; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
