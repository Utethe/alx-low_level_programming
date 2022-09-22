#include <ctype.h>
#include <stdio.h>
/**
 * cap_string - capitalizes all words of a string.
 * @str: strings
 * Return: pointer to str
 */
char *cap_string(char *str)
{
	char ch;
	int nx;
	int a = 0;

	*(str + a) = toupper(str[a]);
	while (str[a])
	{
		switch (str[a])
		{
		case 9:
		case 32:
		case 10:
		case 44:
		case 59:
		case 46:
		case 33:
		case 63:
		case 34:
		case 40:
		case 41:
		case 123:
		case 125:
			nx = a + 1;
			ch = str[nx];
			if (isalpha(ch))
			{
				*(str + nx) = toupper(ch);
			}
			break;
		}
		a++;
	}
	return (str);
}
