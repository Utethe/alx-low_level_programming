#include <stdio.h>
#include <string.h>
/**
 * my_palindrome - checks if a string is palindrome
 * @s: string to check
 * @i: small index
 * @li: big index
 * Return: 1 if n is a prime number, else 0
 */
int my_palindrome(char *s, int i, int li)
{
	if (i >= li)
		return (1);
	if (s[i] != s[li])
		return (0);
	return (my_palindrome(s, i + 1, li - 1));
}

/**
 * is_palindrome - checks if a string is palindrome
 * @s: string to check
 * Return: 1 if s is a palindrome, else 0
 */
int is_palindrome(char *s)
{
	int i, li;

	if (*s == 0)
		return (1);
	i = 0;
	li = strlen(s) - 1;
	return (my_palindrome(s, i, li));
}
