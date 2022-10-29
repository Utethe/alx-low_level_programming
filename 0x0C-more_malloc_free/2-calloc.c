#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: length of the array
 * @size: size of each element of the array
 * Return: a pointer to the allocated memory or NULL otherwise
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int f;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	f = 0;
	while (f < (nmemb * size))
	{
		ptr[f] = 0;
		f++;
	}
	return (ptr);
}
