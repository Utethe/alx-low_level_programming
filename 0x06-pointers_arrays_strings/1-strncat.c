#include <string.h>
/**
 * _strncat - concatenates two strings.
 * @dest: destination str
 * @src: source str
 * @n: number of characters from source str
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
