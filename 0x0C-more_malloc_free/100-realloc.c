#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the old memory block
 * @old_size: size of the old memory block
 * @new_size: size of the new memory block
 * Return: a pointer to the newly created memory or NULL otherwise
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *nptr, *optr;
	unsigned int e;

	if (old_size == new_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	nptr = malloc(new_size);
	if (!nptr)
		return (NULL);
	if (new_size > old_size)
		new_size = old_size;
	optr = ptr;
	e = 0;
	while (e < new_size)
	{
		nptr[e] = optr[e];
		e++;
	}
	free(ptr);
	return (nptr);
}
