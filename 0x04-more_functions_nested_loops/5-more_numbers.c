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
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return: 0
 */
void more_numbers(void)
{
	int i, n;

	for (i = 1; i <= 10; i++)
	{
		for (n = 0; n <= 14; n++)
		{
			printm(n);
		}
		_putchar('\n');
	}
}
