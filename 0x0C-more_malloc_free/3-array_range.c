#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum integer
 * @max: maximum integer
 * Return: a pointer to the newly created array or NULL otherwise
 */
int *array_range(int min, int max)
{
	int *ptr;
	int y, e;

	if (min > max)
		return (NULL);
	y = max - min + 1;
	ptr = malloc(sizeof(y) * y);
	if (ptr == NULL)
		return (NULL);
	e = 0;
	while (e < y)
	{
		ptr[e] = min;
		e++;
		min++;
	}
	return (ptr);
}
