#include <ctype.h>
#include <stdio.h>
/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @str: array of integers
 * Return: pointer to str
 */
char *string_toupper(char *str)
{
	char ch;
	int a = 0;

	while (str[a])
	{
		ch = str[a];
		*(str + a) = toupper(ch);
		a++;
	}
	return (str);
}
