#include "main.h"
/**
 *get_bit - get bit at index
 *@n: num
 *@index: index of bit starting from 0
 *Return: the value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i = 1;

	i = i << index;
	if (index > 32)
		return (-1);
	if (n & i)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
