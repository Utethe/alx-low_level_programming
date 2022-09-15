#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: length of the diagonal
 * Return: 0
 */
void print_diagonal(int n)
{
	int i, k;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (i = 1; i <= n; i++)
	{
		for (k = 1; k <= i; k++)
		{
			if (k != 1)
			{
				_putchar(' ');
			}
			if (i == k)
			{
				_putchar('\\');
				_putchar('\n');
				break;
			}
		}
	}
}
