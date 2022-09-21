#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * rev_string - rev_string
 * @s: pointer to string str
 */
void rev_string(char *s)
{
	int i;
	char tmp;
	int slen = strlen(s);

	for (i = 0; i < slen / 2; i++)
	{
		int exc = slen - i - 1;

		tmp = s[i];
		*(s + i) = *(s + exc);
		*(s + exc) = tmp;
	}
}
