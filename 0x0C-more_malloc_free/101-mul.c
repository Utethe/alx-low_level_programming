#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * error - prints error and exit with 98
 */
void error(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * _isdigit - checks if a character is a digit
 * @s: string of character to check
 * Return: 0 if is alpha, 1 if it is digit
 */
int _isdigit(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * main - multiplies 2 numbers
 * @argc: number of arguments
 * @argv: arguments array
 * Return: 0
 */
int main(int argc, char **argv)
{
	char *s1, *s2;
	int l1, l2, ln2, l, *res, d1, d2, cr, i, v = 0;

	if (argc != 3)
		error();
	s1 = argv[1], s2 = argv[2];
	if (!_isdigit(s1) || !_isdigit(s2))
		error();
	l1 = strlen(s1), l2 = ln2 = strlen(s2);
	l = l1 + l2;
	res = calloc(l + 1, sizeof(int));
	if (!res)
		return (1);
	for (l1 = l1 - 1; l1 >= 0; l1--)
	{
		d1 = s1[l1] - '0';
		cr = 0;
		for (l2 = ln2 - 1; l2 >= 0; l2--)
		{
			d2 = s2[l2] - '0';
			cr += res[l1 + l2 + 1] + (d1 * d2);
			res[l1 + l2 + 1] = cr % 10;
			cr /= 10;
		}
		if (cr > 0)
			res[l1 + l2 + 1] += cr;
	}
	for (i = 0; i < l; i++)
	{
		if (res[i])
			v = 1;
		if (v)
			_putchar(res[i] + '0');
	}
	if (!v)
		_putchar('0');
	_putchar('\n');
	free(res);
	return (0);
}
