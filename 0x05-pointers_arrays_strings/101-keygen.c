#include <stdlib.h>
#include <stdio.h>
#include<time.h>

/**
 * main - generates random valid passwords for
 * the program 101-crackme.
 * Return: the number for string s
 */
int main(void)
{
	int i;

	srand(time(0));
	for (i = 0; i < 4; i++)
		printf(" %d ", rand());
	return (0);
}
