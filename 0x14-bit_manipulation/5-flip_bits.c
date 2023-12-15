#include "main.h"
/**
 * flip_bits -  calculates the number of bits you would need to flip
 *  to get from one number to another.
 * @n: integer
 * @m: integer
 * Return: the number of flipped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int t;
	unsigned int i = 0;

	for (t = n ^ m; t > 0; t >>= 1)
	{
		if (t & 1)
		{
			i++;
		}
	}
	return (i);
}
