#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 * Return: 0
 */
void print_triangle(int size)
{
	int i, k, p;

	if (size <= 0)
	{
		_putchar('\n');
	}
	p = size;
	for (i = 1; i <= size; i++)
	{
		for (k = 1; k <= size; k++)
		{
			if (k < p)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
		p--;
		_putchar('\n');
	}
}
