#include <ctype.h>
#include "main.h"

/**
 * _isupper - check if a character is an uppercase
 * @c: caharcter to check
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(char c)
{
	if (isupper(c))
	{
		return (1);
	}
	return (0);
}
