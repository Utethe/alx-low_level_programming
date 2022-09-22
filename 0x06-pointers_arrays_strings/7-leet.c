#include <string.h>
/**
 * leet - encodes a string into 1337.
 * @str: strings
 * Return: pointer to str
 */
char *leet(char *str)
{
	int i;
	int a = 0;
	char z[] = {'a', 'e', 'o', 't', 'l'};
	char d[] = {52, 51, 48, 55, 49};

	for (a = 0; a < (int)strlen(str); a++)
	{
		for (i = 0; i < 5; i++)
		{
			if (strncasecmp(&str[a], &z[i], 1) == 0)
			{
				*(str + a) = d[i];
			}
		}
	}
	return (str);
}
