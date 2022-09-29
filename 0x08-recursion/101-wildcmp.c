#include <stdio.h>
#include <string.h>
/**
 * my_wildcmp - compares two strings
 * @s1: string to check
 * @s2: string to check
 * @i: s1 index
 * @j: s2 index
 * Return: 1 if the strings can be considered identical, otherwise return 0
 */
int my_wildcmp(char *s1, char *s2, int i, int j)
{
	int l;

	l = strlen(s1) > strlen(s2)? strlen(s1) : strlen(s2);
	if (s1[i] == s2[j])
		return (1);
	if (s1[i] != s2[j])
		return (0);
	return (my_wildcmp(s1, s2, i + 1, j - 1));
}

/**
 * is_palindrome - compares two strings
 * @s1: string to check
 * @s2: string to check
 * Return: 1 if the strings can be considered identical, otherwise return 0
 */
int wildcmp(char *s1, char *s2)
{
	int i, j;

	if (s1 == s2)
		return (1);
	i = 0;
	j = 0;
	return (my_wildcmp(s1, s2, i, j));
}
