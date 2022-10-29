#include <string.h>
/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: binary to convert
 * Return: an unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int w, p = 0;
	unsigned int res = 0;

	if (!b)
		return (0);
	for (w = strlen(b) - 1; w >= 0; w--)
	{
		if (b[w] < '0' || b[w] > '1')
			return (0);
		if (b[w] == '0')
		{
			p++;
			continue;
		}
		res += 1 << p;
		p++;
	}
	return (res);
}
