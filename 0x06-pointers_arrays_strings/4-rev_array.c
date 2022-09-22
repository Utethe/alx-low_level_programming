#include <string.h>
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: array of integers
 * @n: length of array
 */
void reverse_array(int *a, int n)
{
	int i, tmp, en;

	for (i = 0; i < n / 2; i++)
	{
		en = n - i - 1;
		tmp = a[i];
		*(a + i) = a[en];
		*(a + en) = tmp;
	}
}
