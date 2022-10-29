#include "main.h"
/**
 * clear_bit - clear the bit at a given index
 * @n: decimal to use
 * @index: index from 0 of the bit to get
 * Return: 1 if success or -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
