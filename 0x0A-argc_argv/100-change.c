#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the minimum number of coins to make change
 * for an amount of money.
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int n, i, r;
	int cn[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	i = 0;
	r = 0;
	while (i < 5 && n > 0)
	{
		if (n >= cn[i])
		{
			n -= cn[i];
			r++;
		}
		else
		{
			i++;
		}
	}
	printf("%d\n", r);
	return (0);
}
