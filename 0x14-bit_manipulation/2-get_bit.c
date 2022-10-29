#include "main.h"
/**
 * get_bit - returns the value of bit at a given index
 * @n: decimal to use
 * @index: index from 0 of the bit to get
 * Return: value of the bit at the index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int v;

	if (index > 63)
		return (-1);
	v = (n >> index) & 1;
	return (v);
}
