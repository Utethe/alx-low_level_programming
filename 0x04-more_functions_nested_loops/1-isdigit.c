#include <ctype.h>

/**
 * _isdigit - check if a character is an digit
 * @c: caharcter to check
 * Return: 1 if c is isdigit, 0 otherwise
 */
int _isdigit(char c)
{
	if (isdigit(c))
	{
		return (1);
	}
	return (0);
}
