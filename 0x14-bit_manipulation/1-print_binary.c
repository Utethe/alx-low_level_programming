#include "main.h"
/**
 * print_binary - prints binary version of unsigned int n
 * @n: decimal to convert
 * Return: an unsigned int
 */
void print_binary(unsigned long int n)
{
	int w = 63, ck = 0;
	unsigned long int rm;

	while (w >= 0)
	{
		rm = n >> w;
		if (rm & 1)
		{
			ck = 1;
			_putchar('1');
		}
		else if (ck == 1)
		{
			_putchar('0');
		}
		w--;
	}
	if (!ck)
		_putchar('0');
}
