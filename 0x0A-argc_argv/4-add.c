#include <stdlib.h>
#include <stdio.h>

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, sm;
	long int k;
	char *p;

	if (!argv[1])
	{
		printf("%d\n", 0);
		return (0);
	}
	sm = 0;
	for (i = 1; i < argc; i++)
	{
		k =  strtol(argv[i], &p, 10);
		if (k != 0 && *p != 0)
		{
			printf("%s\n", "Error");
			return (1);
		}
		if (k != 0 || (k == 0 && *p == 0))
		{
			sm += k;
		}
		else
		{
			printf("%s\n", "Error");
			return (1);
		}
	}
	printf("%d\n", sm);
	return (0);
}
