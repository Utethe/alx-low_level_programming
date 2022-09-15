#include "main.h"

/**
 * print_square - draws a diagonal line on the terminal
 * @size: size of square
 * Return: 0
 */
void print_square(int size)
{
	int i, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = 1; i <= size; i++)
	{
		for (k = 1; k <= size; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
