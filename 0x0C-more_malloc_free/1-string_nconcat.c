#include <stdlib.h>
#include <string.h>

/**
 * _strlen - get the length of a string
 * @str: string to count
 * Return: int, length of the string
 */
int _strlen(char *str)
{
	int c;

	c = 0;
	while (str[c] != '\0')
	{
		c++;
	}
	return (c);
}

/**
 * string_nconcat - concatenates 2 strings
 * @s1: string 1 to concatenate
 * @s2: string 2 to concatenate
 * @n: number of string from 2 to concatenate
 * Return: a pointer to the allocated memory or NULL otherwise
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int k, m, i, j;
	unsigned int w;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	w = _strlen(s2);
	if (n >= w)
		m = w;
	else
		m = n;
	k = _strlen(s1) + m;
	ptr = malloc(sizeof(char) * (k + 1));
	if (ptr == NULL)
		return (NULL);
	j = i = 0;
	while (s1[j] != '\0')
	{
		ptr[i] = s1[j];
		j++;
		i++;
	}
	j = 0;
	while (j < m)
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}
	ptr[i] = '\0';
	return (ptr);
}
