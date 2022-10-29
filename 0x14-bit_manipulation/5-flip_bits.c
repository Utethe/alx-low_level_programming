#include "main.h"
/**
 * flip_bits - get the number of bits to flip to get
 * @n: number to flip
 * @m: number to flip to
 * Return: number of times to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	unsigned long int k = m ^ n;
	unsigned int count = 0;

	for (i = 0; i <= 63; i++)
	{
		if ((k >> i) & 1)
			count++;
	}
	return (count);
}
