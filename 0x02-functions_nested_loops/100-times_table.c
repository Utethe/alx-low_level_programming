#include <stdlib.h>
#include "main.h"

/**
 * printm - helper function, print integer using _putchar
 * @n: number to print
 */
void printm(long n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
		printm(n / 10);
	_putchar(n % 10 + '0');
}

/**
 * countn - helper function, counts the number of digits in a number
 * @n: number to count
 * Return: number of digits in n
 */
int countn(long n)
{
	int l;

	if (n >= 0 && n <= 9)
	{
		return (1);
	}
	l = !n;
	while (n)
	{
		l++;
		n /= 10;
	}
	return (l);
}

/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: times table stop
 * Return: void
 */
void print_times_table(int n)
{
	int i, k, p, nd, l;

	if (n > 15 || n < 0)
	{
		return;
	}
	if (n == 0)
	{
		printm(n);
		_putchar('\n');
		return;
	}
	for (i = 0; i <= n; i++)
	{
		for (k = 0; k <= n; k++)
		{
			p = i * k;
			if (k == 0)
			{
				printm(p);
				_putchar(',');
			}
			else
			{
				nd = countn(p);
				for (l = 1; l <= 4 - nd; l++)
				{
					_putchar(' ');
				}
				printm(p);
				if (k != n)
				{
					_putchar(',');
				}
			}
		}
		_putchar('\n');
	}
}
