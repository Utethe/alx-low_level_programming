#include "main.h"
#include <stdio.h>
/**
 * get_endianness - checks the endian
 * Return: 1 for little and 0 for big endian
 */
int get_endianness(void)
{
	unsigned int i = 12;
	char *ptr = (char *)&i;

	if (*ptr)
		return (1);
	return (0);
}
