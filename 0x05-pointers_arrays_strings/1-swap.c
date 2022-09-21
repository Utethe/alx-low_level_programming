#include "main.h"

/**
 * swap_int - swaps the values of 2 integers
 * @a: pointer to integer 1
 * @b: pointer to integer 1
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
